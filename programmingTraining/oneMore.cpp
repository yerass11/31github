#include <bits/stdc++.h>

using namespace std;

void oneMore(vector <int> v) {
    
}

int main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        
        while (n--) {
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
    
    int sum = 0;
    int mult = 1;

    for (int i = 0; i < n; ++i) {
        sum += v[i];
        mult *= v[i];
    }
    if (sum != 0 && mult != 0) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < n; ++i) {
            if (v[i] == 0) {
                v[i]++;
            }
    }
    }
    }

    return 0;
}