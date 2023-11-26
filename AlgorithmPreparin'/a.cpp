#include <iostream>
#include <cassert>
using namespace std;

struct node {
	int data;
	node *nxt;
	node() {
		data = 0;
        nxt = nullptr;
	}
	node(int _data) {
		data = _data;
	}
	node(int _data, node *_nxt) {
		data = _data;
		nxt = _nxt;
	}
	// node(int _data) : data(_data) {}
};
// newo --> o --> o --> 0
struct linked_list {
	node *head;

	node* get_tail() {
		if (head == 0)
			return 0;
		node *cur = head;
		while (cur->nxt != 0)
			cur = cur->nxt;
		return cur;
	}

	node* get(int i) {
		// return node at pos i or return 0
		node *cur = head;
		for (int j = 0; j < i; j++) {
			if (cur == 0)
				return 0;
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
		node *new_node = new node(data);
		tail->nxt = new_node;
	}

	void insert(int i, int data) {
		// insert at pos i means
		// put element with data at position i
		// moving everything to right
		if (i == 0) {
			insert_begin(data);
			return;
		}
		node *A = get(i-1);
		if (A == 0) {
			insert_tail(data);
			return;
		}
		node *B = A->nxt;
		node *new_node = new node(data, B); // new -> B
		A->nxt = new_node; // A -> new
	}

	void output() {
		cout << "[";
		node *cur = head;
		while (cur != 0) {
			cout << cur->data;
			cur = cur->nxt;
			if (cur == 0)
				cout << "]";
			else
				cout << ", ";
		}
		cout << "\n";
	}

	void del_begin() { // oldhead--> newhead-->
		if (head == 0)
			return;
		node *old_head = head;
		head = head->nxt;
		delete old_head; // no memory leakage
	}
	void del_end() { // o--> o--> o-->
		if (head == 0) // empty list
			return;
		if (head->nxt == 0) { // head is a tail
			delete head;
			head = 0;
			return;
		}
		node *cur = head;
		while (cur->nxt->nxt != 0) // search guy before the tail
			cur = cur->nxt;
		delete cur->nxt;
		cur->nxt = 0;
	}
	void del(int i) {
		// exc
	}
};


int main() {

	linked_list L;
	L.insert(0, 10); // [10]
	L.insert(1, 20); // [10, 20]
	L.insert(2, 30); // [10, 20, 30]
	L.insert(3, 40); // [10, 20, 30, 40]

	L.insert(2, 50); // [10, 20, 50, 30, 40]
	L.output();

	L.del_begin();
	L.output();


	L.del_end();
	L.output();


	return 0;
}



