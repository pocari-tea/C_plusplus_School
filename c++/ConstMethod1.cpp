#include<iostream>
using namespace std;

class CTest
{
public:
	CTest(int nParam) : m_nData(nParam) {};
	~CTest() {}

	//상수형 메서드로 선언 및 정의
	int GetData() const
	{
		//멤버 변수 값을 일긍ㄹ 수는 있지만 쓸수는 없다.
		return m_nData;
	}

	int SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

int main()
{
	CTest a(10);
	cout << a.GetData() << endl;

	return 0;
}