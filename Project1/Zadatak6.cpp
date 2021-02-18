#include<iostream>

using namespace std;

void arrazs() {
	int niz1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int niz2[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	int velicina1 = sizeof(niz1) / sizeof(niz1[0]);

	int velicina2 = sizeof(niz2) / sizeof(niz2[0]);;

	int* niz3 = new int[velicina1 + velicina2];

	for (int i = 0; i < velicina1; i++)
	{
		cout << i << "Niz1: " << ". " << niz1[i] << endl;
		niz3[i] = niz1[i];
	}
	cout << endl << "*******" << endl;

	for (int i = 0; i < (velicina1 + velicina2); i++)
	{
		cout << "NIZ3: " << niz3[i] << endl;
	}
	cout << endl << "*******" << endl;

	for (int i = 0; i < velicina2; i++)
	{
		cout << i << "Niz2: " << ". " << niz2[i] << endl;
		niz3[velicina1 + i] = niz2[i];
	}
	cout << endl << "*******" << endl;

	for (int i = 0; i < (velicina1 + velicina2); i++)
	{
		cout << "NIZ3: " << niz3[i] << endl;
	}

}


int Zadatak6main() {
	/*arrazs();*/
	char* ime = new char[20];
	char* prezime = new char[20];

	cout << "Unesi ime: " << endl;

	cin.getline(ime, sizeof ime);

	cout << "Unesi prezime: " << endl;

	cin.getline(prezime, sizeof prezime);

	int velicina1 = sizeof(ime) / sizeof(ime[0]);

	int velicina2 = sizeof(prezime) / sizeof(prezime[0]);;


	int velicinai = strlen(ime) + 1;
	int velicinap = strlen(prezime) + 1;
	cout << velicinai + velicinap;
	int v3 = velicinai + velicinap;
	char* imePrezime = new char[v3];

	for (int i = 0; i < velicinai; i++)
	{
		cout << i << ". " << ime[i] << endl;
		imePrezime[i] = ime[i];


	}

	for (int i = 0; i < (velicinap); i++)
	{
		cout << i << ". " << prezime[i] << endl;
		imePrezime[velicinap + i] = prezime[i];
	}

	for (int i = 0; i < (v3); i++)
	{
		cout << i << ". " << imePrezime[i] << endl;
	}



	return 0;
}