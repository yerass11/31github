#include <bits/stdc++.h>

using namespace std;

void oneMore(int cnt, int n, vector <int> v) {
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
        cnt++;
    }
    cout << cnt << endl;

}


int main(){
    int k; cin >> k;
    vector <int> v;
    while (k--) {
        int cnt = 0;
        int n; cin >> n;
            while (n--) {
                int x; cin >> x;
                v.push_back(x);
            }
        oneMore(cnt, n, v);
        v.clear();
    }

    return 0;
}