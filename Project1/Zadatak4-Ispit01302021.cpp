#include <iostream>
#include <cmath>

using namespace std;

// Napisati Rekuryivnom funkcijom
// program trayi od korisnika unos nekog prirodnog bropja od 50 -100
// rekuryivnom funkcijom iyracunati sumu od 0 do tog broja.
//
void zbir() {


	int a = 0;

	if (a < 50 && a > 100)
	{
		cout << "Broj nije validan, unesite opet.";
		cin >> a;
	}
	int suma = 0;
	for (int i = 0; i < a; i++)
	{
		suma += i;
	}
	cout << suma;
}



int zbir(int a) {
	if (a == 0)
	{
		return 0;
	}
	return a + zbir(a - 1);
}


int zbir(int a, int b) {
	if (a == 0)
	{
		return 0;
	}
	if (b == 0)
	{
		return 0;
	}
	return a + zbir(a - 1, b - 1);
}


int funkcija(int a) {
	cout << a << endl;

	if (a == 0)
	{
		return 0;
	}
	if (a > 0 && a <= 10)
	{
		int power = pow(a, 2);
		cout << "Power;" << power << endl;
		return power + funkcija(a - 1);
	}

	if (a >= 11 && a <= 20)
	{
		int power = pow(a, 3);
		cout << power << endl;
		return power + funkcija(a - 1);

	}

	if (a >= 21 && a <= 30)
	{
		int power = pow(a, 4);
		cout << power << endl;
		return power + funkcija(a - 1);
	}

	if (a >= 31 && a <= 40)
	{
		int power = pow(a, 5);
		cout << power << endl;
		return power + funkcija(a - 1);
	}

	cout << "Unesen broj veci od 50 ne racunamo ya njega nista";
	return 0;

}

int Rekurzijamain() {
	cout << "Unesite broj od 50 do 100";
	int a;
	cin >> a;
	/*cout << "Unesite broj izvrsavanja: ";
	int b;
	cin >> b;*/
	//if (a < 50 && a > 100)
	//{
	//	cout << "Nije validno";
	//	cin >> a;
	//}
	//else {
	//	cout << "Broj je validan";

	//	int suma = zbir(a, b);
	//	cout << suma;
	//}
	int rezultat = funkcija(a);

	cout << "Reyultat; " << rezultat << endl;
	return 0;
}