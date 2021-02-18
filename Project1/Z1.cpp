#include<iostream>
using namespace std;

//
//Napisati program u kojem je potrebno unijeti odabrani broj cifara počevši od cifre najveće težinske vrijednosti, 
//pa od njih sastaviti i ispisati prirodni broj.Unos cifara se prekida kada se unese broj manji od 0,
//ukoliko korisnik unese cifru vecu od 9, ispisati poruku da cifra nije validna, ali se unos ne prekida.
//(Obavezno koristiti bar jednu korisnički definisanu funkciju).
//
//Ispis neka bude oblika :
//```
//Upisi cifru : 2
//Upisi cifru : 8
//Upisi cifru : 72
//Cifra nije validna
//Upisi cifru : -1
//Broj sastavljen od zadanih cifara je 28.


int sastavljeniBrojevi(int uslov1, int uslov2) {
	int broj;
	int sastavljeniBroj = 0;

	do
	{
		cout << "Unesite broj: " << endl;

		cin >> broj;
		if (broj > uslov2)
		{
			cout << "Cifra " << broj << " nije valida" << endl;
		}
		else {
			if (broj > uslov1)
			{
				sastavljeniBroj = sastavljeniBroj * 10 + broj;

			}
		}


	} while (broj > uslov1);


	return sastavljeniBroj;
}


int Z11main() {




	int uslovZaPrekid1 = -1;
	int uslovZaPrekid2 = 9;





	cout << "Sastavljeni broj je: " << sastavljeniBrojevi(uslovZaPrekid1, uslovZaPrekid2) << endl;




	return 0;
}