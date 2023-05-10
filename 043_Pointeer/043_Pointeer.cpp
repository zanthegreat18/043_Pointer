#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showmim();
};

void mahasiswa::showmim() {
	cout << "No induk = " << nim << endl;
}