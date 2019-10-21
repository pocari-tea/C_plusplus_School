#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[12];
	cin >> str;

	char *pa = new char[strlen(str)];

	cout << str << endl;

	delete []pa;

	return 0;
}
