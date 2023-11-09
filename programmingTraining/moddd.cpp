#include <bits/stdc++.h>

using namespace std;

void pod(int &a, int &b, long long int &l, long long int &r) {
    long long int cnt = 0;
    for (int i = l; i <= r; ++i) {
        long long int x0 = i / a;
        long long int x1 = i - (x0 * a);
        long long int x2 = x1 / b;
        long long int x3 = x1 - (x2 * b);
        long long int y0 = i / b;
        long long int y1 = i - (y0 * b);
        long long int y2 = y1 / a;
        long long int y3 = y1 - (y2 * a);
        
        if (x3 != y3) {
            cnt++;
        }
    }
    cout << cnt << " ";    
}

int main(){
    int t; cin >> t;
    while (t--) {
        int a, b, n; cin >> a >> b >> n;
        while (n--) {
            long long int l, r; cin >> l >> r;
            pod(a, b, l, r);
        }
        cout << endl;
    }

    return 0;
}