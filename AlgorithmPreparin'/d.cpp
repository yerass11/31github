#include <iostream>
using namespace std;

struct node {
    int val;
    node* left;
    node* right;
    node(int val) {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

class bst {
public:
    node* root;

    bst() {
        root = nullptr;
    }

    void add(int val) {
        root = add(root, val);
    }

    void hod(string s) {
        if (hod(root, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

private:
    node* add(node* cur, int val) {
        if (cur == nullptr) {
            cur = new node(val);
        } else if (val < cur->val) {
            cur->left = add(cur->left, val);
        } else if (val > cur->val) {
            cur->right = add(cur->right, val);
        }
        return cur;
    }

    bool hod(node* cur, string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                cur = cur->left;
                if (cur == nullptr) {
                    return false;
                }
            } else {
                cur = cur->right;
                if (cur == nullptr) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    bst b;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        b.add(l);
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        b.hod(s);
    }

    return 0;
}