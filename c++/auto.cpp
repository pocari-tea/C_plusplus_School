#include <iostream>
using namespace std;

//L-value �� ���� : �ڽŸ��� �޸𸮰� �ʿ���, R-value�� ������ ���� ��������
int main()
{
	int alist[5] = { 10, 20, 30, 40, 50 };

	for (auto n : alist)
		cout << n << ' ';
	cout << endl;

	for (auto &n : alist)
		cout << n << ' ';
	cout << endl;

	return 0;
}