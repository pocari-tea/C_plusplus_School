#include<iostream>
using namespace std;

class CTestData
{
public:
	explicit CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	~CTestData()
	{
		cout << "~CTestData()" << endl;
	}

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

void TestFunc(const CTestData & param)
{
	cout << "TestFunc(): " << param.GetData() << endl;
}

int main()
{
	cout << "*****Begin*****" << endl;

	TestFunc(5);

	cout << "******End******" << endl;

	return 0;
}