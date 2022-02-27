#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long

int main() {
    ull h, w, temp_h, counter, cats, heights;
    while(cin >> h >> w) {
        if(h == 0 && w == 0)
            break;
        for(int n = 1; ; n++) {
            temp_h = h;
            counter = 0; 
            cats = 1;
            heights = h;
            while(temp_h != 1) {
                if(temp_h % (n + 1) != 0)
                    break;
                temp_h /= (n + 1);
                counter++;
                cats += pow(n, counter);
                heights += pow(n, counter) * temp_h;
            }
            if(temp_h == 1 && cats >= w) {
                cout << cats - w << " " << heights << "\n";
                break;
            }
        }

    }
    return 0;
}
