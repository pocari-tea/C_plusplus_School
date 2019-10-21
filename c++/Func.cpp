#include <string>
#include <iostream>
using namespace std;

//두 정수를 뺄셈하는 함수
int Func(int a, int b)
{
	return a - b;
}

//세 정수를 뺄셈하는 함수
int Func(int a, int b, int c)
{
	return a - b - c;
}

//두 실수를 뺄셈하는 함수(반환값 실수) 오류
int Func(double a, double b)
{
	return a - b;
}

//두 실수를 뺄셈하는 함수(반환값 정수) 오류
int Func(double a, double b)
{
	return a - b;
}

int main()
{
	cout << Func(5, 2) << endl;
	cout << Func(5, 2, 1) << endl;
	cout << Func(5., 2.5) << endl;
}