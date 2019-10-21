#include <string>
#include <iostream>
using namespace std;

namespace name
{
	int Data = 24;
	void test()
	{
		cout << "name::test()" << endl;
	}
}

using namespace name;
int main()
{
	test();
	cout << Data << endl;
	return 0;
}