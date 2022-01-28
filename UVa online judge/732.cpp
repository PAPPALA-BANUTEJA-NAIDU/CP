#include<bits/stdc++.h>
using namespace std;

string in, out;
void dfs(string a, string b, string stack, string path, int n) {
    if(n == in.length() * 2) {
        if(b == out)
            cout << path << endl;
        return;
    }

    if(a.length() > 0) {
        dfs(a.substr(1, a.length() - 1), b, stack+a[0], \
                path + (n == 0 ? "i": " i"), n + 1);
    }

    //pop
    if(stack.length() > 0 && stack[stack.length()-1] == \
            out[b.length()])
        dfs(a, b + out[b.length()], stack.substr(0, stack.length()-1), \
                    path + " o", n + 1);
}

int main() {
    while(cin >> in >> out) {
        printf("[\n");
        if(in.length() == out.length())
            dfs(in, "", "", "", 0);
        printf("]\n");
    }
}
