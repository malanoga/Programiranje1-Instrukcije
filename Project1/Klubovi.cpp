//Doidavanje igraca ya odredjeni klub,
//Dodavanje Klubova u ligu,
//Dodavanje i mijenjanje informacija o klubu i ligi i plazeru
//9:01
//Edit funkcija ya svaku strukturu
//9 : 02
//kad pretrayujes klub
//9 : 02
//otvori se meni i ponudi
//1 Edit info o klubu
//9 : 03
//Prosirivanje postojecih funkcionalnosti
#include <iostream>
#include "Liga.h"

using namespace std;
const int igracDodavanje = 3;
const int igracEditovanje = 4;
const int igracPoID = 5;
const int igracPoImenu = 6;
const int meniPrekid = 0;


void meniIgraci(Klub k) {
	int odabir;
	Fudbaler fudbaler;
	do
	{
		cout << "*** MENI IGRACA ***" << endl;
		cout << "Odaberite 3 za dodavanje novog igraca" << endl;
		cout << "Odaberite 4 za mjenjanje igraca" << endl;
		cout << "Odaberite 0 za prekid" << endl;
		cin >> odabir;
	} while (odabir != meniPrekid && odabir != igracDodavanje && odabir != igracEditovanje);
	if (odabir == igracDodavanje)
	{
		cout << "Dodajte igraca" << endl;
	}
	else if (odabir == igracEditovanje)
	{
		do
		{
			cout << "*** MENI IGRACA ***" << endl;
			cout << "Odaberite 5 za pretragu po ID" << endl;
			cout << "Odaberite 6 za pretragu po imenu i prezimenu" << endl;
			cout << "Odaberite 0 za prekid" << endl;
			cin >> odabir;
		} while (odabir != meniPrekid && odabir != igracPoID && odabir != igracPoImenu);
		if (odabir == igracPoID)
		{
			fudbaler = k.TraziFudbalera(0);
		}
		else if (odabir == igracPoImenu) {
			fudbaler = k.TraziFudbalera("");
		}
	}
}
void meniLiga() {
	Liga liga;
	Klub NadjeniKlub;
	int odabir;
	do
	{
		cout << "*** MENI ***" << endl;
		cout << "Odaberite 1 za dodavanje kluba" << endl;
		cout << "Odaberite 2 za izbor kluba" << endl;
		cout << "Odaberite 0 za prekid" << endl;
		cin >> odabir;
	} while (odabir != 0 && odabir != 1 && odabir != 2);
	if (odabir == 1)
	{
		cout << "Dodajte klub" << endl;
	}
	else if (odabir == 2)
	{
		NadjeniKlub = liga.GetMojaLiga().TraziKlub();
	}
	meniIgraci(NadjeniKlub);
}

int main() {
	meniLiga();

	return 0;
}