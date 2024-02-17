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
	node* past, *present;

	past = present = n;

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


	PrintNode(n);
	cout << endl;
	pop_back(n);
	cout << endl;
	PrintNode(n);



}