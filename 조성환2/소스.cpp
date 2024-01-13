#include <vector>
#include <queue>			// queue가 들어있는 헤더파일
#include <stack>
#include <iostream>

using namespace std;
int main()
{
	//queue<int> q;				// int형 큐 선언
	//q.push(1);					// queue에 값 1 추가
	//q.push(2);					// queue에 값 2 추가
	//q.push(3);					// queue에 값 3 추가
	//q.pop();					// queue에 값 제거
	//q.size();					// queue의 크기 출력
	//q.empty();					// queue가 비어있는지 check (비어있다면 true)
	//q.front();					// queue의 가장 첫번째 원소 출력
	//q.back();					// queue의 가장 마지막 원소 출력

	//stack<int> s;				// int형 스택 선언
	////stack<char> s;			// char형 스택 선언
	//s.push(1);					// stack에 값 1 추가
	//s.push(2);					// stack에 값 2 추가
	//s.push(3);					// stack에 값 3 추가
	//s.pop();					// stack에 값 제거
	//s.top();					// stack의 가장 상단의 값 출력
	//stack<int> s1;				// int형 스택 선언
	//stack<int> s2;				// int형 스택 선언
	//s1.push(1);					// stack s1에 값 1 추가
	//s1.push(2);					// stack s1에 값 2 추가
	//s1.size();					// stack s1의 크기 출력 : 2
	//s1.swap(s2);				// stack s2와 요소 바꾸기

	//vector<int> Number;
	//vector<int>::iterator it;
	//int Cin_Number = 0;
	//int Average = 0;
	//int i = 0;
	//for (;;) {
	//	cout << endl << "정수를 입력하세요(입력을 중단은 0) :";
	//	cin >> Cin_Number;
	//	Number.push_back(Cin_Number);
	//	if (Number.back() == 0) break;
	//	++i;
	//}
	//for (i = 0; i < Number.size(); ++i)
	//	Average += Number[i];

	//Average = Average / (Number.size() - 1);
	//cout << endl << "입력된 정수 : ";
	//for (it = Number.begin(); it != Number.end(); ++it)
	//	cout << *it << " ";

	//cout << "평균 : " << Average << endl;

  /*1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100, 000)
	2 : 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다.없다면 - 1을 대신 출력한다.
	3 : 스택에 들어있는 정수의 개수를 출력한다.
	4 : 스택이 비어있으면 1, 아니면 0을 출력한다.
	5 : 스택에 정수가 있다면 맨 위의 정수를 출력한다.없다면 - 1을 대신 출력한다.*/
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