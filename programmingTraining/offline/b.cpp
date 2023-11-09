#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    // while (n--) {
    //     if (s[i] != 0) {
    //         cnt++;
    //     } else {
    //         cout << cnt;
    //         cnt = 0;
    //     }
    //     i++;
    // }
    for (int i = 0; i < n; ++i) {
        cout << cnt << endl;
        if (s[i] != 0) {
            cnt++;
        } else if (s[i+1] == 0 && s[i] == 0) 
        {
            cout << cnt << 0;
        }
        
        else if (s[i] == 0) {
            cout << cnt;
        }
    }

    return 0;
}