#include<iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "CTest::CTest()" << endl;
	}
};

int main()
{
	cout << "Ldata_begin" << endl;
	CTest *lData = new CTest[3];
	cout << "Test2" << endl;

	delete[] lData;

	return 0;
}