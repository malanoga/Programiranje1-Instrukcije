#pragma once
#include<iostream>
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
