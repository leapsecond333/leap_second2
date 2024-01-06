#include <vector>
#include <iostream>

using namespace std;
int main()
{
	// 1 ~ 5�� ���ڸ� Vector�� ����
	vector<int> v1;
	for (int i = 1; i <= 5; i++)
		v1.push_back(i);

	//Iterator�� Vector�� �������� ���
	// begin() : ù��° ��ġ�� Iterator�� ����
	// v1.end() : ������ ������ ���� ��ġ�� Iterator�� ����
	for (auto i = v1.begin(); i != v1.end(); ++i)
		cout << *i << " ";

	//�ݴ� �������� �������� ���
	// rbegin(), rend()�� ����(reverse)�� Iterator�� ����
	cout << "\n";
	for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
		cout << *ir << " ";

	//�迭 ó�� Vector[index] ���� ������ ���
	cout << "\n";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	// Vector.at(index)�� ������ ���
	cout << "\n";
	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";

	return 0;
}