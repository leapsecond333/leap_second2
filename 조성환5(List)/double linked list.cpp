#include <iostream>

using namespace std;

typedef struct node {
	node* prev;
	node* next;
	int data;
}node;
void PrintNode(node* n);
void push_back(node* n, int data) {
	node* new_n, * another_n;
	new_n = new node;
	new_n->next = NULL;
	new_n->data = data;

	while (1) {
		if (n->next == NULL)
			break;
		another_n = n;
		n = n->next;
	}

	n->next = new_n;
	new_n->prev = n;
}

node* push_front(node* n, int data) {
	node* new_n, * another_n;
	new_n = new node;
	new_n->prev = NULL;
	new_n->data = data;
	
	while (1) {
		if (n->prev == NULL)
			break;
		another_n = n;
		n = n->prev;
	}

	n->prev = new_n;
	new_n->next = n;
	return new_n;
}

void insert_data(node* n, int forward_data, int data) {
	node* new_n, * forward_n, * another_n;
	new_n = new node;
	new_n->data = data;
	forward_n = n;
	int position = forward_data;

	for (int i = 0; i < position; i++) {
		another_n = n;
		n = n->next;
	}

	new_n->next = n;
	n->prev = new_n;
	forward_n->next = new_n;
	new_n->prev = forward_n;
}

void pop_data(node* m, int data) {
	node* prev_n, * present_n, * next_n, * mm;
	int position = data;
	mm = m;
	prev_n = mm;

	while (1) {
		if (mm->data == data)
			break;
		prev_n = mm;
		mm = mm->next;
	}
	present_n = mm;
	next_n = present_n->next;
	next_n->prev = prev_n;
	prev_n->next = next_n;
	PrintNode(m);
	delete present_n;
}

void PrintNode(node* n) {
	while (1) {
		cout << n->data<< " ";
		if (n->next == NULL)
			break;
		n = n->next;
	}
}

int main()
{
	node* n;
	n = new node;
	n->next = NULL;
	n->prev = NULL;
	n->data = 1;

	push_back(n, 2);

	PrintNode(n);
	cout << endl;

	push_back(n, 3);
	cout << endl;
	
	PrintNode(n);
	cout << endl;
	
	n = push_front(n, 0);
	cout << endl;
	
	PrintNode(n);
	cout << endl;
	
	pop_data(n, 2);
	cout << endl;
	
	PrintNode(n);
	cout << endl;
	
	insert_data(n, 2, 2);
	cout << endl;
	
	PrintNode(n);
	cout << endl;
}