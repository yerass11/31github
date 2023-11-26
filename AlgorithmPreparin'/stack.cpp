#include <bits/stdc++.h>

using namespace std;

// FILO - First Input Last Output
// stack is google history on wikipedia

struct Stack {
    int a[100];
    int n;

    Stack() {
        n = 0;
    }

    int size() {
        return n;
    }

    void push(int x) {
        a[n++] = x;
    }

    void pop() {
        if (n == 0) {
            cout << "ERROR: Stack" << endl;
            exit(0);
        }
        n--;
    }

    int top() {
        return a[n-1];
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    cout << "size = " << st.size() << '\n';
    cout << st.top() << '\n';
    st.pop();
    cout << "size = " << st.size() << '\n';
    cout << st.top() << '\n'; 
    st.pop();
    st.pop();
    cout << st.top() << '\n'; 

    return 0;
}