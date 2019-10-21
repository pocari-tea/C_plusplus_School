#include<iostream>
#include<string>
using namespace std;

class CTest
{
	int m_ndata;

public:
	CTest(int nParam) : m_ndata(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
	cout << "CTest::CTest(" << m_ndata << ")" <<endl;
	}
};

int main()
{
	cout << "Begin" << endl;
	CTest a(1);
	cout << "Before b" << endl;
	CTest b(2);
	cout << "End" << endl;

	return 0;
}