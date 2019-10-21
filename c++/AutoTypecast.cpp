#include<iostream>
using namespace std;

class CTestData
{
public:
	explicit CTestData(int nParam) : m_nData(nParam) { }

	operator int(void) { return m_nData; }

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

int main()
{
	CTestData a(10);
	cout << a.GetData() << endl;

	cout << a << endl;
	cout << (int)a << endl;
	cout << static_cast<int>(a) << endl;

	return 0;
}