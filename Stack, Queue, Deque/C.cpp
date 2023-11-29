#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t; cin >> s >> t;
    stack<char> q, v;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '#'){
            q.push(s[i]);
        }else if(!q.empty() && s[i] == '#'){
            q.pop();
        }else if(q.empty() && s[i] == '#'){
            q.push(s[i]);
        }
    }
    
    for(int i = 0; i < t.size(); i++){
        if(t[i] != '#'){
            v.push(t[i]);
        }else if(!v.empty() && t[i] == '#'){
            v.pop();
        }else if(v.empty() && t[i] == '#'){
            v.push(t[i]);
        }
    }
    
    if(v.size() == q.size()) cout << "Yes";
    else cout << "No";
}