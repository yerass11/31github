#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    int q; cin >> q;

    while (q--) {
        int l, a, b; cin >> l >> a >> b;    
        bool isEqual = true;
        
        while (l--) {
            if (s[a] != s[b]) {
                isEqual = false;
            }
            a++;b++;
        }
        cout << (isEqual ? "yes\n" : "no\n");
    }

    return 0;
}