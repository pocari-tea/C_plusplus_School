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
	CMYdata data; // ������ �����Ҷ� �ڵ� ȣ��
	//data.m_ndata = 10; ���� ���� �����ڰ� private�� �ܺ��� main���Ե� ������ �����Ѵ�.
	data.Setdata(10);
	cout << data.Getdata() << endl;

	return 0;
}