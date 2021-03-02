#include <iostream>
using namespace std;

struct Fudbaler {


	int ID;
	string ImePrezime;
	string Pozicija;
	int BrojGolova;

	Fudbaler() {}

	Fudbaler(int id, string imeprezime, string pozicija, int brojgolova) {
		this->BrojGolova = brojgolova;
		this->ID = id;
		this->ImePrezime = imeprezime;
		this->Pozicija = pozicija;
	}

	void SetId(int id) {
		this->ID = id;
	}
	void SetImePrezime(string imeprezime) {
		this->ImePrezime = imeprezime;
	}
	void SetPozicija(string pozicija) {
		//uslov:
		// N, O ili V, duzina smije biti 1 char, upper case;
		while (pozicija != "N" && pozicija != "V" && pozicija != "O")
		{
			cout << "Pozicija nije validna. Unesite novu." << endl;
			cin >> pozicija;

		}

		this->Pozicija = pozicija;

	}
	void SetBrojGolova(int brojgolova) {
		this->BrojGolova = brojgolova;
	}
	int GetId() {
		return this->ID;
	}
	string GetImePrezime() {
		return this->ImePrezime;
	}
	string GetPozicija() {
		return this->Pozicija;
	}
	int GetBrojGolova() {
		return this->BrojGolova;
	}

	void Info() {
		cout << "Igrac ID: " << GetId() << endl;
		cout << "Ime i prezime igraca: " << GetImePrezime() << endl;
		cout << "Pozicija igraca: " << GetPozicija() << endl;
		cout << "Broj golova: " << GetBrojGolova() << endl;
	}
};

struct Klub {
	string ImeKluba;
	int BrojIgraca;
	Fudbaler* NizFudbalera;

	Klub() {}

	Klub(string imekluba, int brojigraca) {
		this->ImeKluba = imekluba;
		this->BrojIgraca = brojigraca;
		this->NizFudbalera = new Fudbaler[brojigraca];
	}
	void SetImeKluba(string imekluba) {
		this->ImeKluba = imekluba;
	}
	string GetImeKluba() {
		return this->ImeKluba;
	}

	void DodajFudbalera(Fudbaler f) {
		this->NizFudbalera[BrojIgraca - 1] = f;
	}
	int GetBrojIgraca() {
		return this->BrojIgraca;
	}
	void ObrisiZadnjegIgraca() {
		if (BrojIgraca > 0)
		{
			this->BrojIgraca = BrojIgraca - 1;
		}
	}

	void Info() {
		cout << endl;
		cout << "Klub: " << GetImeKluba() << endl;
		cout << "Broj igraca: " << GetBrojIgraca() << endl;
	}
};
struct Liga {

	string ImeLige;
	int velicinaLige = 3;
	Klub* nizKlubova = new Klub[velicinaLige];
	Liga() {

	}
	Liga(string imelige) {
		this->ImeLige = imelige;
	}
};

Liga GetMojaLiga() {

	Liga liga = Liga("Liga1");
	Klub klub1 = Klub("Klub1", 1);
	Klub klub2 = Klub("Klub2", 2);
	Klub klub3 = Klub("Klub3", 3);
	liga.nizKlubova[0] = klub1;
	liga.nizKlubova[1] = klub2;
	liga.nizKlubova[2] = klub3;
	return liga;
}
void meni() {

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
		cout << "Odaberite klub" << endl;
		string traziKlub;
		cin >> traziKlub;

		Liga NasaLiga = GetMojaLiga();

		for (int i = 0; i < NasaLiga.velicinaLige; i++)
		{
			if (traziKlub == NasaLiga.nizKlubova[i].GetImeKluba())
			{
				cout << "Klub postoji." << endl;
				NasaLiga.nizKlubova[i].Info();
				break;
			}
		}
	}
}

int main() {


	meni();
	//Fudbaler* fudbaler = new Fudbaler(127, "asdf", "O", 0);	fudbaler[0].Info();
	//Klub* klubovi;
	//int brojKlubova;
	//cout << "Unesite broj klubova: ";
	//cin >> brojKlubova;
	//klubovi = new Klub[brojKlubova];
	//for (int i = 0; i < brojKlubova; i++)
	//{
	//	string imeKluba;
	//	int brojIgraca;

	//	cout << "Unesite ime kluba: ";
	//	cin >> (imeKluba);
	//	cout << "Unesite broj igraca: ";
	//	cin >> brojIgraca;

	//	Klub novi = Klub(imeKluba, brojIgraca);
	//	klubovi[i] = novi;

	//}

	//klubovi[0].Info();

	//Fudbaler* fudbaler2 = new Fudbaler(123, "789", "mudo marijanovvo", 123);
	//fudbaler2->SetId(127);
	//fudbaler2->SetImePrezime("Adis Sertovic");
	//fudbaler2->SetBrojGolova(0);
	//fudbaler2->SetPozicija("O");

	//fudbaler2->Info();

	return 0;
}