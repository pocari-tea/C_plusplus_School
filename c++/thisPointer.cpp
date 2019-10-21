#include<iostream>
using namespace std;

class CMyData
{
public:
	CMyData(int nParam) : m_nData(nParam) {};

	void Test(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}

	void printData()
	{
		cout << m_nData << endl;
		cout << CMyData::m_nData << endl;
		cout << this->m_nData << endl;
		cout << this->CMyData::m_nData << endl;

		cout << "num1 : " << num1 << endl;
		cout << "num2 : " << num2 << endl;
	}

private:
	int m_nData;
	int num1, num2;
};

int main()
{
	CMyData a(5), b(10);
	a.Test(2, 4);
	b.Test(3, 6);
	a.printData();
	b.printData();

	return 0;
}