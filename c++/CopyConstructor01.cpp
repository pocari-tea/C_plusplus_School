#include<iostream>
#include<string>
using namespace std;

class CParent
{
public:
	CParent()
	{
	}

	CParent(const CParent& obj)
	{
		strcat_s(m_Name, obj.m_Name);
	}

	char m_Name[16] = { 0 };
};

class CPerson : public CParent
{
public:
	CPerson(const char *ParentName, const char* Name)
	{
		strcat_s(CParent::m_Name, ParentName);
		strcat_s(m_Name, Name);
	}

	CPerson(const CPerson& obj)
	{
		strcat_s(CParent::m_Name, "À¯ÀüÀÚ°øÇĞ");
		strcat_s(m_Name, obj.m_Name); // Àå¼ö¿Õ
		strcat_s(m_Name, " Copy");
	}

	char m_Name[16] = { 0 };
};

void main() 
{
	CPerson p1("±¤°³Åä´ë¿Õ", "Àå¼ö¿Õ");
	CPerson p2 = p1;

	cout << p1.CParent::m_Name << " - " << p1.m_Name << endl;
	cout << p1.CParent::m_Name << " - " << p1.m_Name << endl;
}