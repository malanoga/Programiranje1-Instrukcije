//
//2D niz na slici predstavlja šahovsku tablu.Napraviti i testirati u main programu slijedeće funkcije :
//a)	Funkcija za unos elemenata tako da se u svako crno polje unese parni broj sa neparnim brojem cifara a u svako bijelo polje unese neparni broj sa parnim brojem cifara.
//b)	Funkcija koja će računati aritmetičku sredinu svih brojeva na crnim poljima iznad glavne dijagonale.
//Za olaksanje rjesenja, mozete izabrati prototip funkcija po zelji te kreirati dodatne funkcije po potrebi.
//
//C - Crna
//B - Bijela
//```
//+ ---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//| C00 | B01 | C02 | B03 | C04 | B05 | C06 | B07 |
//+---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//| B10 | C11 | B12 | C13 | B14 | C15 | B16 | C17 |
//+---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//| C20 | B21 | C22 | B23 | C24 | B25 | C26 | B27 |
//+---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//| B30 | C31 | B32 | C33 | B34 | C35 | B36 | C37 |
//+---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//| C40 | B41 | C42 | B43 | C44 | B45 | C46 | B47 |
//+---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//| B50 | C51 | B52 | C53 | B54 | C55 | B56 | C57 |
//+---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//| C60 | B61 | C62 | B63 | C64 | B65 | C66 | B67 |
//+---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//| B70 | C71 | B72 | C73 | B74 | C75 | B76 | C77 |
//+---- - +---- - +---- - +---- - +---- - +---- - +---- - +---- - +
//```
#include <iostream>
using namespace std;

void ispisTable(int niz[][8]) {

	for (int i = 0; i < 8; i++)
	{
		cout << i << endl;

		for (int j = 0; j < 8; j++)
		{
			cout << " " << niz[i][j];
		}
		cout << endl;
	}
}

int zMatricamain() {

	const int dimenzijaX = 8;
	const int dimenzijaY = 8;
	int niz[dimenzijaX][dimenzijaY];

	int kec = 1;
	int dvica = 2;

	for (int i = 0; i < dimenzijaX; i++)
	{

		if (i % 2 == 0) {
			for (int j = 0; j < dimenzijaY; j++)
			{
				if (j % 2 != 0)
				{
					niz[i][j] = 1;
				}
				else {
					niz[i][j] = 2;
				}
			}
		}
		else {
			for (int j = 0; j < dimenzijaY; j++)
			{
				if (j % 2 != 0)
				{
					niz[i][j] = 2;
				}
				else {
					niz[i][j] = 1;
				}
			}


		}
	}
	ispisTable(niz);
	return 0;
}