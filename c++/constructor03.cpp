#include<string>
#include<iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "������" << endl;
	}

	~CTest()
	{
		cout << "�Ҹ���" << endl;
	}
};

int main()
{
	cout << "Begin" << endl;
	CTest a;
	cout << "Before b" << endl;
	CTest b;
	cout << "End" << endl;

	return 0;
}