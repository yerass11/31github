#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int len, sub; cin >> len >> sub;
    string s; cin >> s;
    map <char, bool> m;
    while (sub--) {
        char c; cin >> c;
        m[c] = 1; 
    }

    long long int cnt = 0, su = 0;
    for (long long int i = 0; i < len; ++i) {
        if (m[s[i]] == 1) {
            su++;
        } else {
            cnt += (su * (su + 1)) / 2;
            su = 0;
        }
    }

    cnt += (su * (su + 1)) / 2;
    cout << cnt << endl;
    
    return 0;
}