#include <bits/stdc++.h>

using namespace std;

int main(){
    queue <int> q1, q2;

    for (int i = 0; i < 5; ++i) {
        int k; cin >> k;
        q1.push(k);
    }

    for (int i = 0; i < 5; ++i) {
        int k; cin >> k;
        q2.push(k);
    }

    int cntN = 0, cntB = 0;

    int x = 10e6;
    while (x--) {
        if (q1.empty()) {
            cout << "Nursik " << cntN;
            return 0;
        }
        if (q2.empty()) {
            cout << "Boris " << cntB;
            return 0;
        }

        int k1 = q1.front();
        int k2 = q2.front();
        
        q1.pop();
        q2.pop();
        
        if (k1 == 0 && k2 == 9) {
            q1.push(k1);
            q1.push(k2);
            cntB++;
        } else if (k2 == 0 && k1 == 9) {
            q2.push(k1);
            q2.push(k2);
            cntN++;
        } else if (k1 > k2) {
            q1.push(k1);
            q1.push(k2);
            cntB++;
        } else if (k2 > k1) {
            q2.push(k1);
            q2.push(k2);
            cntN++;
        }
        
    }

    cout << "blin nichya";

    return 0;
}
