#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    stack <char> st1, st2;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '#') st1.push(s[i]);

        else if (!st1.empty() && s[i] == '#')
            st1.pop();
        else if (st1.empty() && s[i] == '#')
            st1.push(s[i]);
    }

    for (int i = 0; i < t.size(); ++i) {
        if (t[i] != '#') st2.push(t[i]);

        else if (!st2.empty() && t[i] == '#')
            st2.pop();
        else if (st2.empty() && t[i] == '#')
            st2.push(t[i]);
    }

    if (st1.size() != st2.size()) {
            cout << "No";
            return 0;
        }

    while (!st1.empty()) {
        if (st1.top() != st2.top()) {
            cout << "No";
            return 0;
        }
        st1.pop();
        st2.pop();
    }

    cout << "Yes";

    return 0;
}