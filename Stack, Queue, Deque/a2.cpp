#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        deque <int> dq;
        for (int i = n; i > 0; --i) {
            dq.push_back(i);
            for (int j = 0; j <= i; ++j) {
                int k = dq.back();
                dq.pop_back();
                dq.push_front(k);
            }
        }
        while (!dq.empty()) {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << endl;
    }


    return 0;
}