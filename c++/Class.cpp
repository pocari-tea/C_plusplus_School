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
		cout << "³ªÀÌ: " << age << " ÀÌ¸§: " << name << endl;
	}
};

int main()
{
	Student s;
	s.student(10, "±èÃ¶¼ö");
	s.Print();

	return 0;
}