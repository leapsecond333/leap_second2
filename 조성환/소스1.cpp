/*#include <iostream>
#include <string>
using namespace std;
string Input_Hand_Data(string user)
{
	string choice;
	cout << user << ": ";
	cin >> choice;
	return choice;
}
int RSP(string Computer, string You)
{
	int result = 0;
	if (Computer == You)
		result = 0;
	else if (Computer == "가위") 
	{
		if (You == "보")
		{
			result = -1;
		}
		else if (You == "바위") 
		{ 
			result = 1;
		}
	}
	else if (Computer == "보") {
		if (You == "바위")
		{ 
			result = -1;
		}
		else if (You == "가위") 
		{
			result = 1;
		}
	}
	else if (Computer == "바위") {
		if (You == "가위") 
		{
			result = -1;
		}
		else if (You == "보") 
		{
			result = 1;
		}
	}
	return result;
}

int WOL(int& Pc, int& User, int result)
{
	cout << "result : " << result << ", Pc : " << Pc << ", User : " << User << endl;
	int i = 1;
	if (result == -1) {
		++Pc;
		cout << "컴퓨터 승" << endl;
	}
	else if (result == 1) {
		++User;
		cout << "플레이어 승" << endl;
	}
	if (Pc == 3 || User == 3)
	{
		if (Pc == 3)	cout << "컴퓨터 최종 승" << endl;
		else			cout << "플레이어 최종 승" << endl;
		i = 0;
		return i;
	}
}

int main() {
	int i = 1, Pc = 0, User = 0, result = 0;
	string Computer = "", You = "";

	cout << "가위 바위 보!" << endl;
	while(i)
	{
		Computer = Input_Hand_Data("컴퓨터");
		You = Input_Hand_Data("사용자");
		
		result = RSP(Computer, You);
		
		i = WOL(Pc, User, result);
	}
}*/