#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int age;
	string name;

public:
	void student(int age, string name)
	{
		this -> age = age;
		this -> name = name;
	}

	void Print()
	{
		cout << "����: " << age << " �̸�: " << name << endl;
	}
};

int main()
{
	Student s;
	s.student(10, "��ö��");
	s.Print();

	return 0;
}