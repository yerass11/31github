#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, cntb = 0, cntn = 0;
    queue<int> b, n;
    for(int i = 0; i < 5; i++){
        cin >> t;
        b.push(t);
    }
    for(int i = 0; i < 5; i++){
        cin >> t;
        n.push(t);
    }
    while(!b.empty() && !n.empty()){
        int a = b.front(), c = n.front();
        b.pop(); n.pop();
        if(a == 0 && c == 9){
            b.push(a);
            b.push(c);
            cntb++;
        }else if(c == 0 && a == 9){
            n.push(a);
            n.push(c);
            cntn++;
        }else if(a > c){
            b.push(a);
            b.push(c);
            cntb++;
        }else if(a < c){
            n.push(a);
            n.push(c);
            cntn++;
        }
        if(cntn + cntb >= 1000000){
            cout << "blin nichya";
            return 0;
        }
    }
    if(b.empty()){
        cout << "Nursik" << ' ' << cntn + cntb;
    }else if(n.empty()){
        cout << "Boris" << ' ' << cntb + cntn;
    }
}