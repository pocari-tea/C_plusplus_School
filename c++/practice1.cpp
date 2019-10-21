#include<iostream>
using namespace std;

int nData = 200;

namespace TEST
{
	int nData = 100;
	void TestFunc(void)
	{
		cout << nData << endl;
	}
}

int main()
{
	TEST::TestFunc();

	return 0;
}