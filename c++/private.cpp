#include<iostream>
#include<string>
using namespace std;

class CMYdata
{
	int m_ndata;
public:
	int Getdata(void) { return m_ndata; }
	void Setdata(int nParam) { m_ndata = nParam; }
};

int main()
{
	CMYdata data; // 생성자 선언할때 자동 호출
	//data.m_ndata = 10; 접근 제어 지시자가 private라서 외부인 main에게도 접근을 금지한다.
	data.Setdata(10);
	cout << data.Getdata() << endl;

	return 0;
}