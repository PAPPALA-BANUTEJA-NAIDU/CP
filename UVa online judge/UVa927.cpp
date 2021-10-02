#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, d, k;
    int degree, temp;

    cin >> t;
    while (t--) {
        cin >> degree;

        vector<int> coefficients;

        for(int i = 0; i <= degree; i++) {
            cin >> temp;
            coefficients.push_back(temp);
        }

        cin >> d >> k;

        int current = 0, counter = 1;

        while(current + counter*d < k) {
            current += counter * d;
            counter++;
        }

        long long result = 0;

        for(int i = 0; i < coefficients.size(); i++) {
            result += coefficients[i] * pow(counter, i);
        }

        cout << result << "\n";
    }
    return 0;
}
