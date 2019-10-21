#include<iostream>
#include <string>
using namespace std;

class CRobot
{
private:
	string name ;
	int height;
	int weight;
	int mana;

public:
	void Set(string name, int height, int weight, int mana)
	{
		this->name = name;
		this->height = height;
		this->weight = weight;
		this->mana = mana;
	}

	void Print()
	{
		cout << "이름: " << name << endl;
		cout << "신장: " << height << endl;
		cout << "무게: " << weight << endl;
		cout << "마력: " << mana << endl << endl;
	}
};

int main()
{
	CRobot tae;
	CRobot magin;
	CRobot mekin;
	CRobot grand;

	tae.Set("태권브이", 18, 80, 3000);
	magin.Set("마징가", 17, 70, 2500);
	mekin.Set("메칸더브이", 20, 90, 3500);
	grand.Set("그랜다이져", 22, 100, 5000);

	tae.Print();
	magin.Print();
	mekin.Print();
	grand.Print();

	return 0;
}