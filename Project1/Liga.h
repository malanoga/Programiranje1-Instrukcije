#pragma once
#include<iostream>
#include "Klub.h"
using namespace std;

struct Liga {
	string ImeLige;
	int trenutnoKlubova = 0;
	int MaksimalanBrojKlubova = 3;
	Klub* Klubovi = new Klub[MaksimalanBrojKlubova];
	Liga() {
	}
	Liga(string imelige) {
		this->ImeLige = imelige;
		Klubovi = new Klub[MaksimalanBrojKlubova];
	}
	void DodajKlub(Klub k) {
		if (trenutnoKlubova < MaksimalanBrojKlubova)
		{
			Klubovi[trenutnoKlubova] = k;
			trenutnoKlubova++;
		}
		else {
			cout << "Ne moze stati vise klubova." << endl;
		}
	}
	Klub TraziKlub(string ime = "") {
		bool NadjenKlub = false;
		Klub temp;
		do
		{
			cout << "Unesite ime trazenog kluba: " << endl;
			cin >> ime;
			for (int i = 0; i < GetMojaLiga().trenutnoKlubova; i++)
			{
				if (ime == GetMojaLiga().Klubovi[i].GetImeKluba())
				{
					temp = GetMojaLiga().Klubovi[i];
					NadjenKlub = true;
				}
			}
		} while (NadjenKlub == true);
		return temp;
	}
	Liga GetMojaLiga() {
		Liga liga = Liga("Liga1");
		Klub klub1 = Klub("Klub1");
		Klub klub2 = Klub("Klub2");
		Klub klub3 = Klub("Klub3");
		liga.Klubovi[0] = klub1;
		liga.Klubovi[1] = klub2;
		liga.Klubovi[2] = klub3;
		return liga;
	}
};
