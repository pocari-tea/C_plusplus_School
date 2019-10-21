#include<iostream>
using namespace std;

class CNumber
{
public:
	int m_Value;

	operator int(void) { return m_Value; }
};

CNumber operator+(const CNumber &rsh)
{

}

int main()
{
	CNumber a;
	CNumber b;
	a.m_Value = 1;
	b.m_Value = 2;
	CNumber sum1 = 1;
	CNumber sum2 = a + 2;
	CNumber sum3 = a + b;
}