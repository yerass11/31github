#include <bits/stdc++.h>

using namespace std;

struct node {
    node* left;
    node* right;
    int key;
    // string data;

    node(int _key = 0) {
        left = right = nullptr;
        key = _key;
    }

    node (int _key, node* left, node* right)
        : key(key), left(left), right(right) {
    }

};

struct BST {
    node* root = nullptr;
    void insert(node* cur, int x) {
        node* next = nullptr;
        if (x <= cur->   key) {
            if (cur->left == nullptr) {
                cur->left = new node(x);
                return;
            }
            next = cur->left;
        } else {
            if (cur->right == nullptr) {
                cur->right = new node(x);
                return;
            }
            next = cur->right;
        }
        insert(next, x);
    }

    void insert(int x) {
        if (root == nullptr)
            root = new node(x); 
        else
            insert(root, x);
    }

    node* find(node* cur, int x) {
        if (x == cur->key) 
            return cur;
        if (x < cur->key)
            return cur->left == nullptr ? nullptr : find(cur->left, x); 
        return cur->right == nullptr ? nullptr : find(cur->right, x);
    }
    node* find(int x) {
        return find(root, x);
    }

    void print(node* cur, int tab = 1) {
        if (cur != nullptr)
            printf("[%d]\n", cur->key);
        else {
            puts("");
            return;
        }
        for (int i = 0; i < tab; i++) 
            putchar('\t');
        printf("L ");
        print(cur->left, tab + 1); 
        for (int i = 0; i < tab; i++) 
            putchar('\t'); 
        printf("R ");
        print(cur->right, tab + 1); 
    }

    void print() {
        print(root);
    }

    node* del(node* cur, int x) {
        if (cur == nullptr) {
            return nullptr;
        }

        if (cur->key > x) {
            cur->left = del(cur->left, x);
        } else if (cur->key < x) {
            cur->right = del(cur->right, x); 
        } else {
            
            if (cur->left == nullptr && cur->right == nullptr) {
                delete cur;
                return nullptr;
            } 

            if (cur->left != nullptr) {
                node* next = cur->left;
                delete cur;
                return next;
            } else if (cur->right != nullptr) {
                node* next = cur->right;
                delete cur;
                return next;
            }
            //else
            node* next = cur->right;
            while (next->left != nullptr) {
                next = next->left;
            }

            cur->key = next->key;
            //cur->data = next->data if data is used
            cur->right = del(cur->right, next->key); 
        }
        return cur;
    }

    void del(int x) {
        root = del(root, x);
    }
}bst;

int main(){
    BST bst;
    bst.insert(6);
    bst.insert(4);
    bst.insert(1);
    bst.insert(5);
    bst.insert(7);
    bst.print();

    bst.del(4);
    bst.print();
    return 0;
}