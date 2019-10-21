#include<iostream>
using namespace std;

class CTestData
{
public:
	CTestData(int nParam, const char *pszName) : m_nData(nParam), m_pszName(pszName)
	{
		cout << "CTEstData(int): " << m_pszName << endl;
	}

	~CTestData()
	{
		cout << "~CTestData(): " << m_pszName << endl;
	}

	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName)
	{
		cout << "CTestData(const CTestData &): " << m_pszName << endl;
	}

	CTestData& operator = (const CTestData &rhs)
	{
		cout << "operator=" << endl;

		m_nData = rhs.m_nData;

		return *this;
	}

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;

	const char *m_pszName = nullptr;
};

CTestData TestFunc(int nParam)
{
	CTestData a(nParam, "a");

	return a;
}

int main()
{
	//CTestData b(5, "b");
	cout << "*****Before*****" << endl;

	TestFunc(10);
	//b = TestFunc(10);
	cout << "*****After*****" << endl;
	//cout << b.GetData() << endl;

	return 0;
}