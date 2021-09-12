#include <bits/stdc++.h>
using namespace std;

int main() {
    int base, power;
    scanf("%d%d", &base, &power);
    printf("%d", (int)log10(pow(base, power))+1);
    return 0;
}
