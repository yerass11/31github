#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while (n--) {
        int a, b; cin >> a >> b;
        int Max = a / b;
        int su = Max * b;
        string s = "";
        char c = 'a';
        int i = 0;
        
        while (su--) {
            s += c;
            i++;    
            
            if (i % Max == 0) {
                c += 1;
            }
    }
    su = Max * b;
    c -= 1;

    if (s.size() == a) {
        cout << s << endl;
    } else {
        while (a != su) {
            s += c;
            su++;
        }
        cout << s << endl;
    }
    }

    return 0;
}