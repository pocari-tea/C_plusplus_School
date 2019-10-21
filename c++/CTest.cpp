#include<iostream>
#include<string>
using namespace std;

class CTest
{
public:
	static int s_value;

};

int CTest::s_value = 1;

int main()
{
	CTest a;
	cout << a.s_value << endl;
}