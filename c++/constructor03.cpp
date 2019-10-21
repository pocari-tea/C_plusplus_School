#include<string>
#include<iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "持失切" << endl;
	}

	~CTest()
	{
		cout << "社瑚切" << endl;
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