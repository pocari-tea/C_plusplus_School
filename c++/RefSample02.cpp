#include<iostream>
using namespace std;

int main()
{
	int boo1 = 2, boo2 = 3;
	int& foo = boo1;


	foo = boo2;

	cout << "foo의 값 " << foo << endl;
	cout << "boo1의 값 " << boo1 << endl;
	cout << "boo2의 값 " << boo2 << endl << endl;

	cout << "foo의 주소 " << &foo << endl;
	cout << "boo1의 주소 " << &boo1 << endl;
	cout << "boo2의 주소 " << &boo2 << endl << endl;

	return 0;
}