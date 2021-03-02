#include<iostream>
using namespace std;

//Napisati program koji će omogućiti unos prirodnog broja A(A > 100000),
//te kreirati i ispisati broj B koji će se sastojati od cifara broja A u obrnutom redoslijedu u kojem je svaka parna uklonjena.
//(npr.ako se unese 45362792 funkcija će vratiti 9735).Ispisati razliku brojeva A i B.Obavezno koristiti bar jednu korisnički definiranu funkciju.

void obrni(int a) {

	int obrnuteCifre = 0;
	while (a > 0.99)
	{
		cout << "Cifra je " << a % 10 << endl;
		if (a % 2 != 0) {

			obrnuteCifre = obrnuteCifre * 10 + a % 10;
		}
		a = a / 10;

	}
	cout << "Obrnute cifre " << obrnuteCifre;

}

int Z6main() {
	int a;
	//int b;

	do
	{
		cin >> a;
		obrni(a);
	} while (a > 100000);



	return 0;
}