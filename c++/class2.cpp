#include<iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		m_nData = 10;
	}
	//��� ������ ����
	int m_nData;
	//��� �Լ� ����
	void printData(void);
};

void CTest::printData(void)
{
	cout << m_nData << endl;
}

int main()
{
	CTest C;
	C.printData();

	return 0;
}