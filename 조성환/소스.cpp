#include <iostream>
#include <string>
using namespace std;
int main() {
	string Computer;
	cout << "Computer>>";
	cin >> Computer;
	string You;
	cout << "You>>";
	cin >> You;
	if (Computer == "가위") {
		if (You == "보")
			cout << "컴퓨터가 이겼습니다." << endl;
		else if (You == "가위")
			cout << "비겼습니다." << endl;
		else if (You == "바위")
			cout << "당신이 이겼습니다." << endl;
	}
	else if (Computer == "보") {
		if (You == "바위")
			cout << "컴퓨터가 이겼습니다." << endl;
		else if (You == "보")
			cout << "비겼습니다." << endl;
		else if (You == "가위")
			cout << "당신이 이겼습니다." << endl;
	}
	else if (Computer == "바위") {
		if (You == "가위")
			cout << "컴퓨터가 이겼습니다." << endl;
		else if (You == "바위")
			cout << "비겼습니다." << endl;
		else if (You == "보")
			cout << "당신이 이겼습니다." << endl;
	}

}