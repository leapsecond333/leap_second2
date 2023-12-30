#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rand(void)
{

}
int main()
{
	char user;
	int computer, user_hand, arr[10];
	int i;
	for (;;)
	{
	for (i = 0; i < 3; ++i)
		{
			cout << "무엇을 내겠습니까? : ";
			cin >> hand;
			cout << endl;
			if (user == '가위')
				user_hand = -1;
			else if (user == '바위')
				user_hand = 0;
			else if (user == '보')
				user_hand = 1;
			else
			{
				cout << "가위, 바위, 보 중에서 하나를 내십시오. (처음부터 다시합니다.)" << endl;
				break;
			}
		}	
	}
	return 0;
}