#include <iostream>
using namespace std;

class CTest
{
public: // private�� �ܺε� �����ؼ� main�� �����ع�����.
	CTest()
		: m_nData(10), n_nData(20)
	{
		cout << "CTest() : ������ �Լ�" << endl;
	}

	int m_nData;
	int n_nData;

	void PrintData(void)
	{
		cout << m_nData << endl;
		cout << n_nData << endl;
	}
};

int main()
{
	cout << "_tmain() �Լ� ����" << endl;

	CTest t;
	t.PrintData();

	cout << "_tmain() �Լ� ��" << endl;

	return 0;
}