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
	/*
	//������� �ʴ°� ����
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