#include <iostream>
#include <string>
using namespace std;
int Input_Hand_Data(string user)
{
	int choice;
	cout << user << ": ";
	cin >> choice;
	return choice;
}
int RSP(int Com, int You)
{
	int result = 0;

	for (int i = 0; i < 3; ++i) {
		if (i == 2) i = 0;
		if (You == Com) result = 0;
		else if (You < Com || Com != 2 || (You == 2 && Com == 0)) result = -1;
		else result = 1;
	}

	return result;
}
int WOL(int& Pc, int& User, int result)
{
	int i = 1;
	if (result == -1) {
		++Pc;
		cout << "컴퓨터 승" << endl;
	}
	else if (result == 1) {
		++User;
		cout << "플레이어 승" << endl;
	}
	else if (result == 0)
		cout << "비겼다..!" << endl;
	if (Pc == 3 || User == 3)
	{
		if (Pc == 3)	cout << "컴퓨터 최종 승" << endl;
		else			cout << "플레이어 최종 승" << endl;
		return i = 0;
	}
}
int main() {
	int i = 1, Pc = 0, User = 0, result = 0, Com = 0, You = 0;
	cout << "가위 : 1, 바위 : 2, 보 : 3!" << endl;
	while (i)
	{
		Com = Input_Hand_Data("컴퓨터");
		You = Input_Hand_Data("사용자");
		result = RSP(Com, You);
		i = WOL(Pc, User, result);	
	}
}