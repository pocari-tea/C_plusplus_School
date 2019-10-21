#include <iostream>
using namespace std;

int main()
{
	int *a = new int;
	int *b = new int(10);
	int *arr = new int[10];

	*a = 10;
	for (int i = 1; i <= 10; i++)
	{
		arr[i-1] = i;
	}

	cout << *a << endl;
	cout << *b << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	delete a;
	delete b;
	delete [] arr;

	return 0;
}