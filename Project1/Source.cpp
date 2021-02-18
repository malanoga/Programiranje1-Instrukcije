//Napisati program koji će omogućiti korisniku da unese veličinu n jednodimenzionalnog  dinamičkog niza integer vrijednosti(n > 2).
//Napisati rekurzivnu funkciju koja će taj niz puniti serijom brojeva 1, 3, 3, 9, 27, ..., tako da je svaki slijedeći broj jednak umnosku dva prethodna broja(Prva dva elementa su 1 i 3.)
//Rekurzija se prekida kad se popuni cijeli niz ili kad se desi overflow na integer varijabli.
//Zatim napraviti drugu rekurzivnu funkciju koja će izračunati zbir svih elemenata tog niza(Voditi računa o tipu podataka zbog veličine broja).
//U ovom zadatku je zabranjeno indexirati elemente niza uglastim zagradama.Obavezno koristiti aritmetiku pokazivača
#include <iostream>
#include <cmath>

using namespace std;

int puniNiz(int* niz, int pocetak) {

	int duzinaNiza = sizeof niz;

	if (duzinaNiza == pocetak)
		return 0;

	niz[pocetak] = niz[pocetak - 1] * niz[pocetak - 2];
	return puniNiz(niz, pocetak + 1);

}


int suma(int* niz, int vel) {

	if (vel == 0)
	{
		return 0;
	}

	return niz[vel - 1] + suma(niz, vel - 1);
}

int y6main() {

	int vel;
	int* niz;

	do
	{
		cout << "Broj mora biti veci od 2" << endl;
		cin >> vel;

	} while (vel <= 2);


	niz = new int[vel];
	niz[0] = 1;
	niz[1] = 3;

	puniNiz(niz, 2);

	for (int i = 0; i < vel; i++)
	{
		cout << niz[i] << endl;
	}

	cout << "**************************" << endl;
	cout << "Suma je : " << suma(niz, vel);
	return 0;
}