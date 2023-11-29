#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n; cin >> n;
    int a[n];
    stack<int> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        while(!s.empty() && s.top() > a[i]) s.pop();
        if(s.empty()) cout << -1 << ' ';
        else cout << s.top() << ' ';
        s.push(a[i]);
    }
}