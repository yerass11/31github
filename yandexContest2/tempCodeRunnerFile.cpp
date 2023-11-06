#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    int q; cin >> q;

    while (q--) {
        int l, a, b; cin >> l >> a >> b;
        int l1 = a + l;
        int l2 = b + l;
        string s1 = "";
        string s2 = "";
        for (int i = a; i < l1; ++i) {
            s1 += s[i];
        }
        for (int i = b; i < l2; ++i) {
            s2 += s[i];
        }
        cout << (s1 == s2 ? "yes" : "no") << '\n';
    }

    return 0;
}