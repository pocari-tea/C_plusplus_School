#include <string>
#include <iostream>
using namespace std;

//�� ������ �����ϴ� �Լ�
int Func(int a, int b)
{
	return a - b;
}

//�� ������ �����ϴ� �Լ�
int Func(int a, int b, int c)
{
	return a - b - c;
}

//�� �Ǽ��� �����ϴ� �Լ�(��ȯ�� �Ǽ�) ����
int Func(double a, double b)
{
	return a - b;
}

//�� �Ǽ��� �����ϴ� �Լ�(��ȯ�� ����) ����
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