#include <iostream>
#include <cmath>
using namespace std;


int punjenjeBrojeva(int vel, int current) {

	if (vel == 0) {
		return 0;
	}
	int rez = pow(2, current + 1);
	current++;

	cout << "Rez " << rez << endl;
	return rez + punjenjeBrojeva(vel - 1, current);
}


int Zadatak3main() {

	int velicinaNiza;
	cout << "Unesite velicinu niza ";
	cin >> velicinaNiza;
	int* niz = new int[velicinaNiza];


	//for (int i = 0; i < velicinaNiza; i++)
	//{
	//	niz[i] = pow(2, i + 1);
	//	cout << "Element " << niz[i] << endl;

	//}


	punjenjeBrojeva(velicinaNiza, 0);



	return 0;
}