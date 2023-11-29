#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    
    stack <char> st;

    for (int i = 0; i < s.size(); ++i) {
        if (!st.empty() && s[i] == st.top())
            st.pop();
        else 
            st.push(s[i]);
    }


    cout << (st.empty() ? "YES" : "NO");



    return 0;
}