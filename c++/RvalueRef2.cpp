#include<iostream>
using namespace std;

void TestFimc(int &rParam)
{
	cout << "TestFunc(int &)" << endl;
}

void TestFunc(int &&rParam)
{
	cout << "TestFunc(int &&)" << endl;
}

int main()
{
	TestFunc(3 + 4);

	return 0;
} 