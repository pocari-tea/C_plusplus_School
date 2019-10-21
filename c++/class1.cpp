#include<iostream>
#include<string>
using namespace std;

class USERDATA
{
public:
	//멤버 변수 선언
	int nAge;
	char szName[32];
	//멤버 함수 선언 및 정의
	void print()
	{
		//nAge와 szName은 print()함수의 지역 변수가 아니다
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