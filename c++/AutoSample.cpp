#include <string>
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b(a);
	auto c(b);

	cout << a + b + c << endl;

	return 0;
}