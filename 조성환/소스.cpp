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
			cout << "������ ���ڽ��ϱ�? : ";
			cin >> hand;
			cout << endl;
			if (user == '����')
				user_hand = -1;
			else if (user == '����')
				user_hand = 0;
			else if (user == '��')
				user_hand = 1;
			else
			{
				cout << "����, ����, �� �߿��� �ϳ��� ���ʽÿ�. (ó������ �ٽ��մϴ�.)" << endl;
				break;
			}
		}	
	}
	return 0;
}