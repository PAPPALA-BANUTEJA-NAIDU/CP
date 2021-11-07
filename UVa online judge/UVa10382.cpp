#include <bits/stdc++.h>
using namespace std;
 
const double EPS = 1e-9;

struct sp {
  int x, r;
  double x_l, x_r;
};

sp sprinkler[10010];

bool cmp(sp a, sp b) {
  if (fabs(a.x_l - b.x_l) > EPS) return a.x_l < b.x_l;
  else                           return a.x_r > b.x_r;
}

int main() {
  int n, l, w;
  while (scanf("%d %d %d", &n, &l, &w) != EOF) {
    for (int i = 0; i < n; ++i) {
      scanf("%d %d", &sprinkler[i].x, &sprinkler[i].r);
      if (2*sprinkler[i].r >= w) {
        double d_x = sqrt((double)sprinkler[i].r*sprinkler[i].r - (w/2.0)*(w/2.0));
        sprinkler[i].x_l = sprinkler[i].x-d_x;
        sprinkler[i].x_r = sprinkler[i].x+d_x;
      }
      else
        sprinkler[i].x_l = sprinkler[i].x_r = sprinkler[i].x;
    }
 
    sort(sprinkler, sprinkler+n, cmp);
    bool possible = true;
    double covered = 0.0;
    int ans = 0;
    for (int i = 0; (i < n) && possible; ++i) {
      if (covered > l) break;
      if (sprinkler[i].x_r < covered+EPS) continue;
      if (sprinkler[i].x_l < covered+EPS) {
        double max_r = -1.0;
        int max_id;
        for (int j = i; (j < n) && (sprinkler[j].x_l < covered+EPS); ++j)
          if (sprinkler[j].x_r > max_r) {
            max_r = sprinkler[j].x_r;
            max_id = j;
          }
        ++ans;
        covered = max_r;
        i = max_id;
      }
      else
        possible = false;
    }
    if (!possible || (covered < l)) printf("-1\n");
    else                            printf("%d\n", ans);
  }

  return 0;
}

