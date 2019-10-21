#include<iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		m_nData = 10;
	}
	//멤버 데이터 선언
	int m_nData;
	//멤버 함수 선언
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