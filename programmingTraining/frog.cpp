#include <bits/stdc++.h>

using namespace std;

void Frog(long long int r, long long int l, long long int k) {
    long long int now = 0;
    if (k % 2 == 0) {
        if (l == r) {
            cout << 0 << endl;
        } else {
            now = (r - l) * (k / 2);
            cout << now << endl;
        }
    } else {
        if (l == r) {
            cout << r << endl;
        } else {
            now = (r - l) * (k / 2) + r;
            cout << now << endl;
        }
    }
}

int main(){
    int n; cin >> n;
    while (n--) {
        long long int r, l, k; cin >> r >> l >> k;
        Frog(r, l, k);
    }

    return 0;
}