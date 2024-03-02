#include <iostream>

using namespace std;

typedef struct node {
	node* next;
	int data;
}node;

void PrintNode(node* n)
{
	while (1)
	{
		cout << n->data << " ";
		if (n->next == NULL)
			break;
		n = n->next;
	}
}

void push_back(node*n, int d)	// data에 값을 넣는 것, Null부터 값이 없는 노드를 찾는 것
{
	while (1) {
		if (n->next == NULL)
			break;
		n = n->next;
	}

	node* p;
	p = new node;
	p->next = NULL;
	p->data = d;
	n->next = p;
}

void pop_back(node* n)
{
	node* past;

	past = n;

	//delete n; // free(n)


	while (1) {
		if (n->next == NULL)
			break;
		past = n;
		n = n->next;

	}
	cout << n->data;
	past->next = NULL;
	delete n;


}

void pop_data(node* n, int n_data)
{
	node* prev_n, * present, * next_n;

	prev_n = n;

	while (1) {
		if (n->data == n_data)
			break;
		prev_n = n;
		n = n->next;
	}

	present = n;
	next_n = present->next;

	prev_n->next = next_n;

	cout << n->data;
	delete n;
}

void insert_data(node* n, int forward_n_data, int new_n_data)
{
	int position = forward_n_data;
	node* prev_n, * new_n, * next_n;
	prev_n = n;

	new_n = new node;
	new_n->data = new_n_data;

	for (int i = 0; i < position; i++)
	{
		prev_n = n;
		n = n->next;
	}
	/*while (1) {
		if (n->data-1 == new_n_data)	// 앞 노드의 다음 노드가 가진 데이터와 노드 n의 데이터가 같을때 반복문을 나온다.
			break;
		prev_n = n;
		n = n->next;
	}*/
	prev_n->next = new_n;
	new_n->next = n;

	/*
	new_n = new node;
	n->next = new_n;
	prev_n->data = forward_n_data;
	prev_n->next = new_n;
	new_n->data = new_n_data;
	next_n = new_n->next;
	*/
}

int main()
{
	/*node n;
	n.data = 1;
	n.next = NULL;*/

	node* n;		//
	n = new node;	// n = (node*)malloc(sizeof(node));
	n->next = NULL;
	n->data = 1;

	push_back(n, 2);
	push_back(n, 3);
	push_back(n, 4);
	push_back(n, 5);

	PrintNode(n);
	cout << endl;
	pop_back(n);
	cout << endl;
	PrintNode(n);

	cout << endl;
	pop_data(n, 3);
	cout << endl;
	PrintNode(n);

	cout << endl;
	insert_data(n, 2, 3);
	cout << endl;
	PrintNode(n);
}
