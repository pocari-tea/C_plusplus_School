#include <iostream>
#include <string>
using namespace std;

class SB {
private:
	string name;

	friend class YT;
};

class YT {
public:
	void set_name(SB& f, string s) {
		f.name = s;
	}
	void show_name(SB& f) {
		cout << f.name << "\n";
	}
};

int main(void) {
	SB f1;
	YT f2;

	f2.set_name(f1, "À¯ÅÂ°Ç");
	f2.show_name(f1);

	return 0;
}