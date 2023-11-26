#include <iostream>
#include <map>

using namespace std;

struct Node {
    char data;
    Node *next;
    Node() {}
    Node (int x) {
        this->data = x;
        this->next = NULL;
    }
};

int main() {
    int n; cin >> n;
    while(n--) {
        Node *head = NULL;
        Node *cur = head;
        map <char, int> mash;
        int k; cin >> k;
        for (int i = 0; i < k; i++) {
            char a; cin >> a;
            if (i == 0 || head == NULL) {
                head = new Node(a);
                cur = head;
                mash[a]++;
            }
            else {
                cur->next = new Node(a);
                cur = cur->next;
                mash[a]++;
            }
            while ((head->data == cur->data || mash[head->data] > 1) && head != cur) {
                Node *tmp = head;
                mash[head->data]++;
                head = head->next;
                delete tmp;
            }
            if (head == cur && i != 0 && mash[cur->data] > 1) {
                cout << -1 << " ";
                head = head->next;
            }
            else {
                cout << head->data << " ";
            }
        }
        cout << "\n";
    }
}