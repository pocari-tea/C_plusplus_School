#include<iostream>
#include<string>
using namespace std;

class USERDATA
{
public:
	//��� ���� ����
	int nAge;
	char szName[32];
	//��� �Լ� ���� �� ����
	void print()
	{
		//nAge�� szName�� print()�Լ��� ���� ������ �ƴϴ�
		printf("%d, %s\n", nAge, szName);
	}
};

int main()
{
	USERDATA User;
	cin >> User.nAge;
	cin >> User.szName;
	User.print();

	return 0;
}