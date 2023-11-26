#include <iostream>
#include <cassert>

using namespace std;

struct node {
    int data;
    node* nxt;
    // node() {
    //     nxt = nullptr;
    // }
    node() {
        data = 0;
    }
    node(int _data) {
        data = _data; 
    }
    node(int _data, node* _nxt) {
        data = _data; 
    }
};
//newo -> o -> o -> o -> o -> NULL
struct LList { 
    node* head = 0;

    node *get_tail() {
        if (head == 0) return 0;
        node *cur = head;
        while(cur->nxt != 0) {
            cur = cur->nxt;
        }
        return cur;
    }

    node* get(int i) {
        // return node at pos i or return NULL
        node* cur = head; 
        for (int j = 0; j < i; ++j) {
            if (cur == 0) return 0;
            cur = cur->nxt;
        }
        return cur;
    }

    void insert_begin(int data) {
        node *new_node = new node(data, head);
        head = new_node;  
    }

    void insert_tail(int data) {
        node *tail = get_tail();
        node *new_node = new node(data, 0);
        tail->nxt = new_node;
    }

    void insert(int i, int data) {
        node* A = get(i-1);
        if (i == 0) {
            insert_begin(data);
            return;
        }
        if (A == 0) {
            insert_tail(data);
            return;
        }
        node* B = A->nxt;
        node* new_node = new node(data, B); // new -> B
        A->nxt = new_node; // A -> new
    }

    void output() {
        cout << "[";
        node* cur = head;
        while (cur != 0) {
            cout << cur->data << " ";
            cur = cur->nxt;   
            if (cur->nxt == 0) {
                cout << "]";
            } else {
                cout << ", ";
            }
        }
    }
};

int main(){
    LList L;
    L.insert(0, 1);
    L.insert(1, 2);
    L.insert(2, 3);
    L.insert(3, 4);

    L.output();

    return 0;
}