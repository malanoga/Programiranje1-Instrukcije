#include<iostream>
#include<cmath>

using namespace std;


int faktorijel(int b) {
	if (b < 2)
	{
		return 1;
	}
	cout << "FAC A je " << b << endl;
	int b2 = b * b;
	cout << "FAC A je " << b2 << endl;
	return b * faktorijel(b - 1);
}

int punjenjeNiza(int a) {

	if (a == 0)
	{
		return 0;
	}
	cout << "A je " << a << endl;
	int b = a;
	int facA = faktorijel(b);
	cout << "faktorijel od A " << facA << endl;
	return facA + punjenjeNiza(a - 1);


}

/*
[Zadatak 03](./Grupa%20A%20-%20Zadatak%2003.cpp)

Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer vrijednosti.
Napisati rekurzivnu funkciju koja će taj niz popuniti faktorijelom rednog broja člana niza (1!, 2!, 3!, 4!...).
Rekurzija se prekida kada se popuni cijeli niz ili kada se desi overflow na integer varijabli.
U ovom zadatku je zabranjeno indeksirati elemente niza uglastim zagradama.
--Obavezno koristiti aritmetiku pokazivača.--
Obavezno sve riješiti jednom rekurzivnom funkcijom.
*/

int Z5main() {

	cout << "Unesi velicinu niza: ";
	int vel;
	cin >> vel;
	int* niz = new int[vel];


	//cout << "punjenjeNiza " << faktorijel(vel) << endl;
	cout << "punjenjeNiza " << punjenjeNiza(vel) << endl;


	return 0;
}