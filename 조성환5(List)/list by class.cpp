#include <iostream>

using namespace std;

class node {
public:
	int NodeData;
	node* FrontNodePointer = NULL;
	node* PriorNodePointer = NULL;
	void data(int Data);
	void next(node* NodePoint);
	void prev(node* NodePoint);
};
void node::data(int Data)
{
	NodeData = Data;
}
void node::next(node* NodePoint)
{
	FrontNodePointer = NodePoint;
}
void node::prev(node* NodePoint)
{
	PriorNodePointer = NodePoint;
}

int main()
{
	node n;
	node k;
	n.data(1);
	n.next = NULL;
}