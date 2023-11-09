#include <bits/stdc++.h>

using namespace std;

void pod(int a, int b, int l, int r, int cnt) {
    cnt = 0;
    for (int i = l; i <= r; ++i) { 
        int o1 = i % a;
        int p1 = i % b;
        int o2 = o1 % b;
        int p2 = p1 % a;
        if (o2 != p2) {
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
            int l, r; cin >> l >> r;
            int cnt = 0;
            pod(a, b, l, r, cnt);
        }
        cout << endl;
    }

    return 0;
}