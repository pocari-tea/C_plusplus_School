#include<iostream>
#include<string>
using namespace std;

class CPerson
{
public:
	string m_Name;
	int m_ID;

	 CPerson(string name, int sut)
		: m_Name(name), m_ID(sut)
	{
	}

	CPerson(const CPerson &copy)
		: m_Name(copy.m_Name), m_ID(copy.m_ID)
	{
		m_ID = -1;
	}
	
};

void main()
{
	CPerson p1("Bill", 1);
	CPerson p2 = p1;

	cout << p1.m_Name << " " << p1.m_ID << endl;
	cout << p2.m_Name << " copy " << p2.m_ID << endl;
}