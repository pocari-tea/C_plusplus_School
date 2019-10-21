#include<iostream>
using namespace std;

class CMyData
{
public:
	explicit CMyData(int nParam)
	{
		m_pnData = new int(nParam);
	}

	~CMyData() { delete m_pnData; }

	operator int() { return *m_pnData; }

	CMyData& operator=(const CMyData &rhs)
	{
		if (this == &rhs)
			return *this;

		delete m_pnData;

		m_pnData = new int(*rhs.m_pnData);

		return *this;
	}

	int operator==(const CMyData &rhs)
	{
		if (*m_pnData == *rhs.m_pnData)
			return 1;
		else
			return 0;
	}

private:
	int *m_pnData = nullptr;
};

int main()
{
	CMyData a(1), b(1), c(10); 
	//a = b = c;

	if (a == b)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	//cout << a << b << endl;

	return 0;
}