#include <iostream>
using namespace std;

// �ʱ� ������
class CMyData
{
public:
	int GetData() { return m_nData; }

	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

// �ı� ������
class CMyDataEx : public CMyData
{
public:
	// �Ļ� Ŭ�������� �⺻ Ŭ������ �޼��带 �������ߴ�.
	void SetData(int nParam)
	{
		// �Է� �������� ���� �����ϴ� ���ο� ����� �߰��Ѵ�.
		if (nParam < 0)
			//CMyData�� �ִ� SetData�� ������ ���ڴ�.
			CMyData::SetData(0);

		if (nParam > 10)
			CMyData::SetData(10);
	}
};

// ����� �ڵ�
int main()
{
	// ���������� ���� �����ϴ� ����� ����.
	CMyData a;
	a.SetData(-10);
	cout << a.GetData() << endl;

	// ���� ���� �������� ���� �����ϴ� ����� �ִ�.
	CMyDataEx b;
	b.SetData(15);
	cout << b.GetData() << endl;

	return 0;
}