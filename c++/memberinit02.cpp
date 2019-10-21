#include <iostream>
using namespace std;

class CTest
{
public: // private는 외부도 차단해서 main도 차단해버린다.
	CTest()
		: m_nData(10), n_nData(20)
	{
		cout << "CTest() : 생성자 함수" << endl;
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
	cout << "_tmain() 함수 시작" << endl;

	CTest t;
	t.PrintData();

	cout << "_tmain() 함수 끝" << endl;

	return 0;
}