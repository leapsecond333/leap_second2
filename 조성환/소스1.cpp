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
	else if (Computer == "����") 
	{
		if (You == "��")
		{
			result = -1;
		}
		else if (You == "����") 
		{ 
			result = 1;
		}
	}
	else if (Computer == "��") {
		if (You == "����")
		{ 
			result = -1;
		}
		else if (You == "����") 
		{
			result = 1;
		}
	}
	else if (Computer == "����") {
		if (You == "����") 
		{
			result = -1;
		}
		else if (You == "��") 
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
		cout << "��ǻ�� ��" << endl;
	}
	else if (result == 1) {
		++User;
		cout << "�÷��̾� ��" << endl;
	}
	if (Pc == 3 || User == 3)
	{
		if (Pc == 3)	cout << "��ǻ�� ���� ��" << endl;
		else			cout << "�÷��̾� ���� ��" << endl;
		i = 0;
		return i;
	}
}

int main() {
	int i = 1, Pc = 0, User = 0, result = 0;
	string Computer = "", You = "";

	cout << "���� ���� ��!" << endl;
	while(i)
	{
		Computer = Input_Hand_Data("��ǻ��");
		You = Input_Hand_Data("�����");
		
		result = RSP(Computer, You);
		
		i = WOL(Pc, User, result);
	}
}*/