#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a = 1;
    map <int, int> m1;
    map <int, int> m2;
    while (n--) {
        int x; cin >> x;
        m1[a] = x;
        ++a;
    }

    map <int, int>::iterator it;
    for (it = m1.begin(); it != m1.end(); ++it) {
        if (it->second == 0) {
            m2[it->first] = it->second;
        }
    }
    
    int cnt = 0;
    for (it = m2.begin(); it != m2.end(); ++it) {
        if (it->first == it->second) {
            cnt++;
        }
        if (cnt > 0) {
        
        } 
    }
    
    
    
    
    
    
    
    
    for (it = m1.begin(); it != m1.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl << endl;
    for (it = m2.begin(); it != m2.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}