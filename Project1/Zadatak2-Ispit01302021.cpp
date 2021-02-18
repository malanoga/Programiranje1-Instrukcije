#include <iostream>
using namespace std;

int Zadatak2main() {
	int kocka1, kocka2, kocka3;
	int brojac = 0;
	int brojacIstih = 0;

	do
	{
		kocka1 = rand() % 6 + 1;
		cout << "Vrijednost kocke 1 je: " << kocka1 << endl;
		kocka2 = rand() % 6 + 1;
		cout << "Vrijednost kocke 2 je: " << kocka2 << endl;
		kocka3 = rand() % 6 + 1;
		cout << "Vrijednost kocke 3 je: " << kocka3 << endl;

		bool k1k2 = kocka1 == kocka2;
		bool k1k3 = kocka1 == kocka3;
		cout << "k1 = k2: " << k1k2 << endl;
		cout << "k1 = k3: " << k1k3 << endl;
		brojac++;

		if (kocka1 == kocka2 && kocka1 == kocka3) {
			brojacIstih++;
			cout << "iste kockice  " << kocka1 << "." << kocka2 << "." << kocka3 << endl;
		}
		else brojacIstih = 0;



	} while ((kocka1 != kocka2 || kocka1 != kocka3) || brojacIstih != 2);

	cout << "kocka je bacena " << brojac << " puta " << endl;
	cout << "isto ponavljanje  " << brojacIstih << " puta " << endl;

	system("pause");
	return 0;
}