#pragma once
#include<iostream>
#include "Fudbaler.h"
using namespace std;


struct Klub {
	string ImeKluba;
	int TrenutniBrojIgraca = 0;
	int MaksimalanTrenutniBrojIgraca = 20;
	Fudbaler* Fudbaleri;
	Klub() {}
	Klub(string imekluba) {
		this->ImeKluba = imekluba;
		this->Fudbaleri = new Fudbaler[MaksimalanTrenutniBrojIgraca];
	}
	void SetImeKluba(string imekluba) {
		this->ImeKluba = imekluba;
	}
	string GetImeKluba() {
		return this->ImeKluba;
	}
	Klub GetDefault() {
		Klub temp = Klub("default");
		return temp;
	}
	void DodajFudbalera(Fudbaler f) {
		this->Fudbaleri[TrenutniBrojIgraca - 1] = f;
	}
	int GetTrenutniBrojIgraca() {
		return this->TrenutniBrojIgraca;
	}
	void ObrisiZadnjegIgraca() {
		if (TrenutniBrojIgraca > 0)
		{
			this->TrenutniBrojIgraca = TrenutniBrojIgraca - 1;
		}
	}
	Fudbaler TraziFudbalera(int id = 0) {
		bool NadjenIgrac = false;
		Fudbaler temp;
		do
		{
			cout << "Unesite ID trazenog igraca: " << endl;
			cin >> id;
			for (int i = 0; i < TrenutniBrojIgraca; i++)
			{
				if (id == this->Fudbaleri[i].GetId())
				{
					temp = this->Fudbaleri[i];
					NadjenIgrac = true;
				}
			}
		} while (NadjenIgrac == true);
		return temp;
	}
	Fudbaler TraziFudbalera(string imeprezine = "") {
		bool NadjenIgrac = false;
		Fudbaler temp;
		do
		{
			cout << "Unesite ID trazenog igraca: " << endl;
			cin >> imeprezine;
			for (int i = 0; i < TrenutniBrojIgraca; i++)
			{
				if (imeprezine == this->Fudbaleri[i].GetImePrezime())
				{
					temp = this->Fudbaleri[i];
					NadjenIgrac = true;
				}
			}
		} while (NadjenIgrac == true);
		return temp;
	}
	void Info() {
		cout << endl;
		cout << "Klub: " << GetImeKluba() << endl;
		cout << "Broj igraca: " << GetTrenutniBrojIgraca() << endl;
	}
};

