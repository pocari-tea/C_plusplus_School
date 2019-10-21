#include <iostream>
#include <string>
using namespace std;

void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b = 20;
	Swap(a, b);

	cout << a << endl;
	cout << b << endl;

	return 0;
}