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
		cout << "�̸�: " << name << endl;
		cout << "����: " << height << endl;
		cout << "����: " << weight << endl;
		cout << "����: " << mana << endl << endl;
	}
};

int main()
{
	CRobot tae;
	CRobot magin;
	CRobot mekin;
	CRobot grand;

	tae.Set("�±Ǻ���", 18, 80, 3000);
	magin.Set("��¡��", 17, 70, 2500);
	mekin.Set("��ĭ������", 20, 90, 3500);
	grand.Set("�׷�������", 22, 100, 5000);

	tae.Print();
	magin.Print();
	mekin.Print();
	grand.Print();

	return 0;
}