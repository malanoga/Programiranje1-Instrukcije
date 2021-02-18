#include<iostream>
using namespace std;


int UnesiBroj() {
	cout << "Unesi broj: " << endl;
	int a;
	cin >> a;
	return a;
}

void IspisSumeDvaBroja() {
	int a;
	a = UnesiBroj();
	cout << "Broj je: " << a << endl;
	int b;
	b = UnesiBroj();
	cout << "Broj je: " << b << endl;
	cout << "Suma brojeva je:  " << a + b << endl;
}

int VracaSumuDvaBroja() {
	int a;
	a = UnesiBroj();
	cout << "Broj je: " << a << endl;
	int b;
	b = UnesiBroj();
	cout << "Broj je: " << b << endl;
	return a + b;
}

int VracaRazlikuDvaBroja() {
	int a;
	a = UnesiBroj();
	cout << "Broj je: " << a << endl;
	int b;
	b = UnesiBroj();
	cout << "Broj je: " << b << endl;
	return a - b;
}

int VracaUmnozakDvaBroja() {


	int a;
	a = UnesiBroj();
	cout << "Broj je: " << a << endl;
	int b;
	b = UnesiBroj();
	cout << "Broj je: " << b << endl;
	return a * b;
}

double VracaKolicnikDvaBroja() {
	int a;
	a = UnesiBroj();
	cout << "Broj je: " << a << endl;
	int b;
	b = UnesiBroj();
	cout << "Broj je: " << b << endl;
	return (double)a / (double)b;
}
/*
napisi funkciju koja trazi da unos 2 broj i ispis tj printanje sume istih;
 napisi funkciju koja trazi da unos 2 broj i vracace sumu istih nakon vracanja ispisati vracenu vrijednost;
 napisi funkciju koja trazi da unos 2 broj vracace razliku nakon vracanja ispisati vracenu vrijednost;
 napisi funkciju koja trazi da unos 2 broj vracace umnozak 2 broja nakon vracanja ispisati vracenu vrijednost;
 napisi funkciju koja trazi da unos 2 broj vracace kolicnik 2 broja nakon vracanja ispisati vracenu vrijednost;
*/
int Digitron() {
	//IspisSumeDvaBroja();
	//cout << "***************************************************************" << endl;
	//int suma = VracaSumuDvaBroja();
	//cout << "Suma je: " << suma << endl;
	//cout << "***************************************************************" << endl;
	//int razlika = VracaRazlikuDvaBroja();
	//cout << "Razlika je: " << razlika << endl;
	//cout << "***************************************************************" << endl;
	//int umn = VracaUmnozakDvaBroja();
	//cout << "Umnozak je: " << umn << endl;
	//cout << "***************************************************************" << endl;
	//double kol = VracaKolicnikDvaBroja();
	//cout << "Kolicnik je: " << kol << endl;
	return 0;
}