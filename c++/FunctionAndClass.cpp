#include<iostream>
using namespace std;

class CTestData
{
public:
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}
	CTestData(const CTestData &rhs) = delete;

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

void TestFunc(CTestData &param)
{
	cout << "TestFunc()" << endl;

	param.SetData(20);
}

int main()
{
	cout << "*****Begin*****" << endl;
	CTestData a(10);
	TestFunc(a);

	cout << "a: " << a.GetData() << endl;

	cout << "*****End*****" << endl;

	return 0;
}