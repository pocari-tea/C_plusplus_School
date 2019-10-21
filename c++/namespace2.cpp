#include <string>
#include <iostream>
using namespace std;

namespace TEST
{
	int Data = 100;
	namespace DEV
	{
		int Data = 200;
		namespace WIN
		{
			int Data = 300;
		}
	}
}

int main()
{
	cout << TEST::Data << endl;
	cout << TEST::DEV::Data << endl;
	cout << TEST::DEV::WIN::Data << endl;

	return 0;
}