#include <iostream>
#include <deque>
#include <vector>

using namespace std;
int main() {
	int N, i, value, move_value, for_stupid_buff_size;
	deque<int> buff;
	vector<int> arr;

	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> value;
		buff.push_back(value);
	}

	arr.push_back(buff[0]);
	move_value = buff[0] - 1;
	buff.erase(buff.begin());
	for_stupid_buff_size = buff.size();
	i = 1;
	while (1) {
		if (buff.size() == 0)
			break;

		if (move_value >= 0 && move_value > for_stupid_buff_size)
			while (1) {
				if (move_value <= for_stupid_buff_size)
					break;
				move_value -= for_stupid_buff_size;
			}
		else if (move_value < 0)
			while (1) {
				if (move_value >= 0 && move_value <= for_stupid_buff_size)
					break;
				move_value += for_stupid_buff_size;
			}

		arr.push_back(buff[move_value]);
		move_value = buff[move_value] - 1;

		if (move_value >= 0 && move_value > for_stupid_buff_size)
			while (1) {
				if (move_value <= for_stupid_buff_size)
					break;
				move_value -= for_stupid_buff_size;
			}
		else if (move_value < 0)
			while (1) {
				if (move_value >= 0 && move_value <= for_stupid_buff_size)
					break;
				move_value += for_stupid_buff_size;
			}
		if (move_value == 0)
			buff.erase(buff.begin() + move_value);
		else
			buff.erase(buff.begin() + move_value - 1);
		for_stupid_buff_size = buff.size();
	}
	for (i = 0; i < arr.size() - 1; i++)
		cout << arr[i] << " ";
}