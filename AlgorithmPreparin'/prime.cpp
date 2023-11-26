#include <bits/stdc++.h>

using namespace std;

int a[100100];

// time complexity O(n ln(ln(n)))

int main(){
    int n; cin >> n;
    a[1] = false;
    
    for (int i = 2; i <= n / i; ++i) {
        if (!a[i]) {
            for (int j = i + i; j <= n; j += i) {
                a[j] = true;
            }
        }
    }

    for (int i = 2; i <= n; ++i) 
        if (!a[i]) 
            cout << i << " ";

    return 0;
}