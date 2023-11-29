#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> v, a;
    v.push_back(9);
    for(int i = 0; i < 100001; i++){
        if(isPrime(i)){
            v.push_back(i);
        }
    }
    for(int i = 0; i < v.size(); i++){
        if(isPrime(i)){
            a.push_back(v[i]);
        }
    }
    
    int n; cin >> n;
    cout << a[n - 1];
}