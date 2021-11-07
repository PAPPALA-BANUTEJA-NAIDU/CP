#include <bits/stdc++.h>
using namespace std;

typedef tuple<double, int, int> dii;

int main() {
  int N, B;
  while (scanf("%d %d", &N, &B), (N != -1 && B != -1)) {
    priority_queue<dii> pq;
    for (int i = 0; i < N; ++i) {
      int a; scanf("%d", &a);
      pq.push({(double)a/1.0, a, 1});
    }
    B -= N;
    while (B--) {
      auto [r, num, den] = pq.top(); pq.pop();
      pq.push({num/(den+1.0), num, den+1});
    }
    printf("%d\n", (int)ceil(get<0>(pq.top()))); 
  }
  return 0;
}

