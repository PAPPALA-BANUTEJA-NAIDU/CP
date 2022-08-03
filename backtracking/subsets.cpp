#include <bits/stdc++.h>
#include <regex>
using namespace std;

void subsets(char *input, char *output, int i, int j) {
    if (input[i] == '\0') {
        output[j] = '\0';
        cout << output << endl;
        return ;
    }
    output[j] = input[i];
    subsets(input, output, i+1, j+1);
    subsets(input, output, i+1, j);
}

void filter_bits(char *input, int n) {
    int j =0;
    while(n > 0) {
        if(n & 1) 
            cout << input[j];
        j++;
        n = n >> 1;
    }
    cout << endl;
}

int main() {
    char input[100];
    char output[100];
    int n;
    cin >> n;
    cin >> input;
    //subsets(input, output, 0, 0);
    for(int i = 0; i < (1 << n ); i++) {
        filter_bits(input, i);
    }
}
