#include <string>
#include <iostream>
using namespace std;

template <typename T>
T TestFunc(T a)
{
	cout << "매개변수의 값은 " << a << "입니다." << endl;
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