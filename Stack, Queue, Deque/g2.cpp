#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    vector <int> v, t;
    v.push_back(-1); // random number to start index at 1

    for (int i = 2; i < 100001; ++i) {
        if (isPrime(i)) v.push_back(i);
    }
    
    for (int i = 2; i < v.size(); ++i) {
        if (isPrime(i)) t.push_back(v[i]);
    }
    
    int n; cin >> n;
    cout << t[n - 1];

    return 0;
}