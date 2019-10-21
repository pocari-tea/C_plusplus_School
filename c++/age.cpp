#include<iostream>
using namespace std;

class Student
{
private:
	int age;
	string name;

public:
	void student(int age, string name)
	{
		this->age = age;
		this->name = name;


	}
};

int main()
{
	Student s;
	s.student(10, "±èÃ¶¼ö");

	return 0;
}