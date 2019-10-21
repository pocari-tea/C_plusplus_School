#include <iostream>
using namespace std;

int main()
{
	int aList[5] = { 30, 20, 40, 10, 50 }, temp;
	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (aList[i] > aList[j])
			{
				temp = aList[i];
				aList[i] = aList[j];
				aList[j] = temp;
			}
		}
	}
	
	for (auto n : aList)
	{
		cout << n << endl;
	}

	return 0;
}