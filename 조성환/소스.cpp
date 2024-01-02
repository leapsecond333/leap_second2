#include <iostream>
#include <string>
using namespace std;
string Input_Hand_Data()
{ string Hand = ""; cin >> Hand; return Hand; }
string RSP(string Computer, string You)
{
	int i = 0, j = 0;
	if (Computer == "가위") {
		if (You == "보") {++i; cout << "패배..!" << endl; return "Computer";}
		else if (You == "가위") {cout << "무승부..!" << endl; return "Draw";}
		else if (You == "바위") {++j; cout << "승리..!" << endl; return "User";}
	}
	else if (Computer == "보") {
		if (You == "바위") {++i; cout << "패배..!" << endl; return "Computer";}
		else if (You == "보") {cout << "무승부..!" << endl; return "Draw";}
		else if (You == "가위") {++j; cout << "승리..!" << endl; return "User";}
	}
	else if (Computer == "바위") {
		if (You == "가위") {++i; cout << "패배..!" << endl; return "Computer";}
		else if (You == "바위") {cout << "무승부..!" << endl; return "Draw";}
		else if (You == "보") {++j; cout << "승리..!" << endl; return "User";}
	}
	else cout << "컴퓨터는 잘못된 것을 냈다..!" << endl; return "오류";
}
int main() {
	int i = 0, j = 0, Pc = 0, User = 0, score = 0, Swap; string Computer = "", You = "", result;
	cout << "총 3번의 판! 가위 바위 보!" << endl;
	for (;;)
	{
		cout << "첫번째 차례는 컴퓨터..!" << endl << "두번째 차례는 당신..!" << endl;
		for (Swap = 0; Swap < 2; ++Swap) { cout << "무엇을 낼까..? "; if (Swap == 0) { Computer = Input_Hand_Data(); } else { You = Input_Hand_Data(); } }
		result = RSP(Computer, You);
		if (result == "Computer") Pc += 1; else if (result == "Draw") continue; else if (result == "User") User += 1; else cout << "결과가 오류가 나왔다.";
		if (Pc == 3 || (Pc == 2 && User == 0)) break; else if (User == 3 || (Pc == 0 && User == 2)) break; else continue;
	}
	if (Pc == 3 || (Pc == 2 && User == 0)) cout << "게임 패배..." << endl;
	else if (User == 3 || (Pc == 0 && User == 2)) cout << "게임 승리..!" << endl;
	else cout << "게임 오류..!" << endl;
}