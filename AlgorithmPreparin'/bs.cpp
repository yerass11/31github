#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 5;
int a[N];

int n;

// int binary_search (int x) {
//     int l = 1, r = n;
//     while (l < r) {
//         int mid = (r - l) / 2 + l;
//         if (a[mid] < x) {
//             l =  + 1;
//         } else {
//             r = a[mid];
//         }
//     }
//     return a[l];
// }


int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    int x; cin >> x;

    // cout << binary_search(x) << endl;
    return 0;
}