#include <string>
#include <iostream>
using namespace std;

//오버로딩 = 다중정의
//오버라이딩 비슷하지만 다름

int Add(int a, int b, int c)
{
	cout << "Add(int, int, int): ";
	return a + b + c;
}
int Add(int a, int b)
{
	cout << "Add(int, int): ";
	return a + b;
}
int Add(double a, double b)
{
	cout << "Add(double, double): ";
	return a + b;
}

int main()
{
	cout << Add(1, 2, 3) << endl;
	cout << Add(1, 2) << endl;
	cout << Add(1., 2.) << endl;

	return 0;
}