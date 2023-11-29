#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        deque<int> q;
        for(int i = n; i > 0; i--){
            q.push_back(i);
            for(int j = 0; j <= i; j++){
                int a = q.back();
                q.pop_back();
                q.push_front(a);
            }
        }
        while(!q.empty()){
            cout << q.front() << ' ';
            q.pop_front();
        }
        cout << '\n';
    }
}