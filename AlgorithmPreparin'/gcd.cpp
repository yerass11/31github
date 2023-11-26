#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;

    return gcd(b, a % b);
}
// O(2*n) = O(n)

//Euclid algorithm
//time complexity is O(log(a * b)) = O(log(a) + log(b)) = O(log(max(a, b)))
//time complexity is O(log(max(a, b)))
int main(){
    int a, b; cin >> a >> b;
    
    cout << gcd(a, b) <<'\n';

    return 0;
}