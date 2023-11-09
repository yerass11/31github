#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 100; vector <int> v(n);
    int target = 64;
    for (int i = 0; i < n; i++) v[i] = i+1;

    int l = 1, r = n;

    while (l <= r) {
        int mid = (l + r) / 2;
        
        if (mid == target) {
            cout << mid << endl;
            break;
        } else if (mid > target) {
            r = mid - 1;
        } else if (mid < target) {
            l = mid + 1;
        }
    }

    return 0;
}


// for (int i = 0; i < n; i++) {
//     if i == target cout << i;
// }
// t: 64
// m1: 50 t > m1, l = mid + 1

//  l = 51, r = 100
// m2 = 75    t < m2, r = mid - 1
// l = 51, r 74
// m3 = 62, t > m3, l = mid + 1
// l = 63, r = 74
// m4 = 68, m4 > t, r = mid - 1
// l = 63, r = 67
// m5 = 65, m5 > t, r = mid - 1
// l = 63, r = 66
// m6 = 64