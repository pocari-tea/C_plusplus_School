#include <string>
#include <iostream>
using namespace std;

template <typename T>
T Add(T a, T b)
{
	return a + b;
}
template <typename A>
A Add2(A a, A b, A c)
{
	return a + b + c;
}
template <typename D>
D Del(D a, D b)
{
	return a - b;
}

int main()
{
	cout << Add(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;
	cout << Add2(1, 2, 3) << endl;
	cout << Del(5, 2) << endl;

	return 0;
}