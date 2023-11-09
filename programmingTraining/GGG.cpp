#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t; cin >> t;
    while (t--) {
        long long int a, b, q;
        cin >> a >> b >> q;
        
        while (q--) {
            long long int cnt = 0;
            long long int l, r;
            cin >> l >> r;
            while (l <= r) {
                long long int x = l % a;
                long long int y = l % b;
                if ((x % b) != (y % a)) {
                    cnt++;
                }
                l++;
            }
            // for (long long int i = l; i <= r; i++) {
            //     long long int x = i % a;
            //     long long int y = i % b;
            //     if ((x % b) != (y % a)) {
            //         cnt++;
            //     }
            // }
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}
