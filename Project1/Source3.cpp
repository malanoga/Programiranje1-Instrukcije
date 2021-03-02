#include<iostream>	
#include<cmath>	
using namespace std;


struct Person
{
	string Ime;
	string Prezime;
	int* DatumRodjenja = new int[3];
	int Visina;
	int Tezina;

	Person() {}
	Person(string ime, string prezime, int datumrodjenja[3], int visina, int tezina) {
		this->Ime = ime;
		this->Prezime = prezime;
		this->DatumRodjenja = datumrodjenja;
		this->Visina = visina;
		this->Tezina = tezina;
	}

	void Info() {
		cout << endl;
		cout << "Ime: " << this->Ime << endl;
		cout << "Prezime: " << this->Prezime << endl;
		cout << "Datum rodjenja: ";
		for (int i = 0; i < 3; i++)
		{
			cout << this->DatumRodjenja[i] << ".";
		}
		cout << endl;
		cout << "Visina: " << this->Visina << " cm" << endl;
		cout << "Tezina: " << this->Tezina << " kg" << endl;
	}

};
struct Autobus {

	int brojSjedala;
	int brojVrata;
	int brojTockova;
	//ima skladiste
	Person* Putnici[50];
	int trenutnoPutnika = 0;

	Autobus() {}
	Autobus(int brSjedala, int brVrata, int brTockova) {
		this->brojSjedala = brSjedala;
		this->brojVrata = brVrata;
		this->brojTockova = brTockova;
		this->trenutnoPutnika = 0;
	}

	void DodajPutnika(Person* putnik) {
		if (trenutnoPutnika < 50)
		{
			Putnici[trenutnoPutnika] = putnik;
			trenutnoPutnika++;
		}
		else {
			cout << "Autobus je popunjen!!!" << endl;
		}
	}
	void UkloniPutnika(Person* putnik) {
		if (trenutnoPutnika < 0)
		{
			cout << "Autobus je prazan" << endl;
		}
		else {
			Putnici[trenutnoPutnika] = NULL;
			trenutnoPutnika--;
		}
	}

	void Info() {
		cout << endl;
		cout << "Broj sjedala: " << this->brojSjedala << endl;
		cout << "Broj vrata : " << this->brojVrata << endl;
		cout << "Broj tockova : " << this->brojTockova << endl;
		cout << "Puntnici: ";

		if (trenutnoPutnika <= 0)
		{
			cout << "Nema putnika " << endl;
		}
		else {
			for (int i = 0; i < trenutnoPutnika; i++)
			{
				Putnici[i]->Info();
			}
		}
		cout << endl;
	}
};


struct pravougliTrougao
{
	int strA;
	int strB;
	double strC;

	pravougliTrougao() {}

	pravougliTrougao(int sA, int sB) {
		this->strA = sA;
		this->strB = sB;
		//int st =this->strA* this->strA( +
		this->strC = sqrt(pow(strA, 2) + pow(strB, 2));
	}

	void ispisPovrsina() {
		cout << "obim je: " << this->strA + this->strB + this->strC << endl;
	}

	void ispisObim() {
		cout << "povrsina je: " << this->strA * this->strB / 2 << endl;
	}
	void ispisSvihStranica() {
		cout << "Stranica a je : " << this->strA << endl;
		cout << "Stranica b je : " << this->strB << endl;
		cout << "Stranica c je : " << this->strC << endl;
	}
};

int Autobusmain() {

	cout << "Unesite stranicu A i stranicu B: ";
	int a, b = 0;
	cin >> a >> b;
	pravougliTrougao* trokut = new pravougliTrougao(a, b);
	trokut->ispisSvihStranica();
	trokut->ispisObim();
	trokut->ispisPovrsina();
	int* niz = new int[3]{ 20, 7, 1999 };
	Person* osoba = new Person("Deni", "Kreso", niz, 185, 78);
	Person* osoba1 = new Person("Mujo", "Mujic", niz, 185, 78);
	Person* osoba2 = new Person("Haso", "Hasic", niz, 185, 78);
	Person* osoba3 = new Person("Adis", "Adis", niz, 185, 78);
	Person* osoba4 = new Person("Fu", "Bar", niz, 185, 78);
	Person* osoba5 = new Person("Amar", "Neki", niz, 185, 78);
	osoba->Info();
	Autobus* bus2 = new Autobus(3, 5, 8);
	bus2->Info();
	bus2->DodajPutnika(osoba);
	bus2->DodajPutnika(osoba1);
	bus2->DodajPutnika(osoba2);
	bus2->DodajPutnika(osoba3);
	bus2->DodajPutnika(osoba4);
	bus2->DodajPutnika(osoba5);
	bus2->Info();
	cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
	bus2->UkloniPutnika(osoba5);
	bus2->Info();
	Autobus* bus = new Autobus[2];
	bus[0] = Autobus(818, 818, 818);
	bus[1] = Autobus(3, 5, 8);
	bus[0].DodajPutnika(osoba);
	bus[0].DodajPutnika(osoba1);
	bus[0].DodajPutnika(osoba2);
	cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
	bus[0].Info();
	cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
	bus[1].DodajPutnika(osoba5);
	bus[1].DodajPutnika(osoba4);
	bus[1].DodajPutnika(osoba3);
	bus[1].Info();
	return 0;
}