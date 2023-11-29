#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    deque<int> q;
    while(true){
        cin >> s;
        if(s == "!"){
            break;
        }
        if(s == "*"){
            if(q.empty()){
                cout << "error" << '\n';
            }else{
                cout << q.front() + q.back() << '\n';
                if(!q.empty()) q.pop_back();
                if(!q.empty()) q.pop_front();
            }
        }
        if(s == "+"){
            cin >> n;
            q.push_front(n);
        }
        if(s == "-"){
            cin >> n;
            q.push_back(n);
        }
        if(s == "s"){
            for(int i = 0; i < q.size(); i++){
                cout << q[i] << ' ';
            }
            cout << '\n';
        }
    }
}