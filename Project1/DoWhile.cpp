#include <iostream>
using namespace std;

int DoWhilemain() {

	string unos = "";
	while (unos != "N" && unos != "V" && unos != "O")
	{
		cout << "Unos je: " << unos << endl;
		cout << "Unesite novi: " << endl;
		cin >> unos;
	}

	return 0;
}