#include <string>
#include <iostream>
using namespace std;

template <typename T>
T TestFunc(T a)
{
	cout << "�Ű������� ���� " << a << "�Դϴ�." << endl;
	return a;
}

int main()
{
	TestFunc(3);
	TestFunc(3.3);
	TestFunc('A');
	TestFunc("TestString");

	return 0;
}