#include <bits/stdc++.h>

using namespace std;

void pod(int &a, int &b, long long int &l, long long int &r) {
    long long int cnt = 0;
    for (long long int i = l; i <= r; ++i) { 
        long long int o2 = (i % a);
        long long int p2 = (i % b);
        if (o2 % b != p2 % a) {
            cnt++;
        }
    cout << cnt << " ";    
    }
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