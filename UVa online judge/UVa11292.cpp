#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
  int n, m;
  while (scanf("%d %d", &n, &m), (n || m)) {
    vi D(n);
    vi H(m);
    for (int d = 0; d < n; ++d) scanf("%d", &D[d]);
    for (int k = 0; k < m; ++k) scanf("%d", &H[k]);
    sort(D.begin(), D.end());
    sort(H.begin(), H.end());
    int gold = 0, d = 0, k = 0;
    while ((d < n) && (k < m)) {
      while ((k < m) && (D[d] > H[k])) ++k;
      if (k == m) break;
      gold += H[k];
      ++d; ++k;
    }
    if (d == n) printf("%d\n", gold);
    else        printf("Loowater is doomed!\n");
  }
  return 0;
}

