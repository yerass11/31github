#include <bits/stdc++.h>

using namespace std;

void oneMore(vector <int> v) {
    int cnt = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == 0) {
            v[i]++;
            cnt++;
        }
    }
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    if (sum == 0) {
        cout << cnt + 1 << endl;
    } else {
        cout << cnt << endl;
    }
}


int main(){
    int n; cin >> n; 
    while (n--) {
        int q; cin >> q;
        vector <int> v;
        while (q--) {
            int x; cin >> x;
            v.push_back(x);
        }
    oneMore(v);
    v.clear();
    }
    
    return 0;
}