#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    deque<int> q1, q2;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'K') q1.push_back(i);
        else q2.push_back(i);
    }

    while(!q1.empty() && !q2.empty()){
        int one = q1.front();
        q1.pop_front();
        int two = q2.front();
        q2.pop_front();
        if (one < two){
            q1.push_back(one + n);
        }else{
            q2.push_back(two + n);
        }
    }
    
    if (!q1.empty()){
        cout << "KATSURAGI";
    }else{
        cout << "SAKAYANAGI";
    } 
}