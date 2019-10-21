#include<iostream>
using namespace std;


class CTest
{
public:
	CTest()
	{
		cout << "생성자" << endl;
	}

	~CTest()
	{
		cout << "소멸자" << endl;
	}
};

int main()
{
	/*
	//사용하지 않는게 좋다
	CTest *pTest = (CTest *)malloc(sizeof(CTest));
	cout << "PTest_begin" << endl;
	free(pTest);
	cout << "PTest_end" << endl;
	*/

	CTest *Pdata = new CTest;
	cout << "Pdata_begin" << endl;
	delete Pdata;
	cout << "Pdatat_end" << endl;

	return 0;
}