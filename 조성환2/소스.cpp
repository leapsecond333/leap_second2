#include <vector>
#include <queue>			// queue�� ����ִ� �������
#include <stack>
#include <iostream>

using namespace std;
int main()
{
	//queue<int> q;				// int�� ť ����
	//q.push(1);					// queue�� �� 1 �߰�
	//q.push(2);					// queue�� �� 2 �߰�
	//q.push(3);					// queue�� �� 3 �߰�
	//q.pop();					// queue�� �� ����
	//q.size();					// queue�� ũ�� ���
	//q.empty();					// queue�� ����ִ��� check (����ִٸ� true)
	//q.front();					// queue�� ���� ù��° ���� ���
	//q.back();					// queue�� ���� ������ ���� ���

	//stack<int> s;				// int�� ���� ����
	////stack<char> s;			// char�� ���� ����
	//s.push(1);					// stack�� �� 1 �߰�
	//s.push(2);					// stack�� �� 2 �߰�
	//s.push(3);					// stack�� �� 3 �߰�
	//s.pop();					// stack�� �� ����
	//s.top();					// stack�� ���� ����� �� ���
	//stack<int> s1;				// int�� ���� ����
	//stack<int> s2;				// int�� ���� ����
	//s1.push(1);					// stack s1�� �� 1 �߰�
	//s1.push(2);					// stack s1�� �� 2 �߰�
	//s1.size();					// stack s1�� ũ�� ��� : 2
	//s1.swap(s2);				// stack s2�� ��� �ٲٱ�

	//vector<int> Number;
	//vector<int>::iterator it;
	//int Cin_Number = 0;
	//int Average = 0;
	//int i = 0;
	//for (;;) {
	//	cout << endl << "������ �Է��ϼ���(�Է��� �ߴ��� 0) :";
	//	cin >> Cin_Number;
	//	Number.push_back(Cin_Number);
	//	if (Number.back() == 0) break;
	//	++i;
	//}
	//for (i = 0; i < Number.size(); ++i)
	//	Average += Number[i];

	//Average = Average / (Number.size() - 1);
	//cout << endl << "�Էµ� ���� : ";
	//for (it = Number.begin(); it != Number.end(); ++it)
	//	cout << *it << " ";

	//cout << "��� : " << Average << endl;

  /*1 X: ���� X�� ���ÿ� �ִ´�. (1 �� X �� 100, 000)
	2 : ���ÿ� ������ �ִٸ� �� ���� ������ ���� ����Ѵ�.���ٸ� - 1�� ��� ����Ѵ�.
	3 : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
	4 : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	5 : ���ÿ� ������ �ִٸ� �� ���� ������ ����Ѵ�.���ٸ� - 1�� ��� ����Ѵ�.*/
	stack<int> stack;
	queue<char> Cin;
	int i = 0;
	int HM;
	int Case;
	int Number;
	cin >> HM;
	cout << endl;
	for (;;) {

		cin >> ;
		switch (Case) {
		case 1 :
			cin >> Number;
			stack.push(Number);
		case 2:
		case 3:
		case 4:
		case 5:
		}

		if (i == HM) break;
		++i;
	}
}