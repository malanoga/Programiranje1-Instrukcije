#include <iostream>
using namespace std;


int UnosBrojaSaVracanjem() {

	cout << "Unesi broj: " << endl;
	int a;
	cin >> a;

	return a;
}

void IspisZvijezdicaZaBroj(int brojZvijezdica) {

	for (int i = 0; i < brojZvijezdica; i++)
	{
		cout << i + 1 << " * ";
	}
}
void IspisZvijezdica() {
	int a = UnosBrojaSaVracanjem();
	IspisZvijezdicaZaBroj(a);
}
/*
Pitati korisnika da unese jednocifren broj.
- ispisati onoliko * koliki je broj; */
int functionMain() {
	//IspisZvijezdica();
	int velicinaNiza = 10;
	int* niz = new int[velicinaNiza];
	for (int i = 0; i < velicinaNiza; i++)
	{
		cout << "Unesi " << i + 1 << " broj: ";
		int broj;
		cin >> broj;
		niz[i] = broj;
	}


	int suma = 0;
	for (int i = 0; i < velicinaNiza; i++)
	{
		suma += niz[i];
	}
	cout << "Kvadrat sume je: " << suma * suma << endl;
	cout << "Suma niza je: " << suma << endl;


	return 0;
}

