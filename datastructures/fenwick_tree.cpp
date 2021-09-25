#include <cstdio>
#include <vector>
using namespace std;

typedef vector<int> vi;
#define LSOne(S) (S & (-S))

class FenwickTree {
private:
  vi ft;

public:
  FenwickTree() {}
  FenwickTree(int n) { ft.assign(n + 1, 0); }

  int rsq(int b) {                                     
    int sum = 0; for (; b; b -= LSOne(b)) sum += ft[b];
    return sum; }

  int rsq(int a, int b) {                             
    return rsq(b) - (a == 1 ? 0 : rsq(a - 1)); }

  void adjust(int k, int v) {                    n
    for (; k < (int)ft.size(); k += LSOne(k)) ft[k] += v; }
};

int main() {               
  FenwickTree ft(10);     
  ft.adjust(2, 1);       
  ft.adjust(4, 1);      
  ft.adjust(5, 2);     
  ft.adjust(6, 3);    
  ft.adjust(7, 2);   
  ft.adjust(8, 1);  
  ft.adjust(9, 1); 
  printf("%d\n", ft.rsq(1, 1));  
  printf("%d\n", ft.rsq(1, 2)); 
  printf("%d\n", ft.rsq(1, 6));  
  printf("%d\n", ft.rsq(1, 10));
  printf("%d\n", ft.rsq(3, 6));

  ft.adjust(5, 2); 
  printf("%d\n", ft.rsq(1, 10)); 
} 

