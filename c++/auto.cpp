#include <iostream>
using namespace std;

//L-value 의 조건 : 자신만의 메모리가 필요함, R-value는 조건이 따로 있지않음
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