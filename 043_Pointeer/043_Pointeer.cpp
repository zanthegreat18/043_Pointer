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

int main()
{
	mahasiswa mhs{ 1 };
	mhs.showmim();

	mahasiswa ref = mhs;
	ref.nim = 2;
	mhs.showmim();

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3;
	mhs.showmim();
	system("pause");
	return 0;
}