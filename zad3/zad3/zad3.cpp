#include <iostream>
using namespace std;
int main()
{
	// do czego służą tablice
	//budowa tablicy
	int tablica[6] = { 10,15,30,45,25,3 };
	// sklad tablicy:typ, nazwa,rowmiar [6] czyli ilośc elementów,
		// wartości, indeks elementow
		//indeksy w tablicy zawsze rozpoczynają sie od zera
	/*
	cout << tablica[0] << endl;
	cout << tablica[1] << endl;
	cout << tablica[2] << endl;
	cout << tablica[3] << endl;
	cout << tablica[4] << endl;
	cout << tablica[5] << endl;

	float tablica2[3] = { 2.2,4.4,5.7 };
	cout << tablica2[1] << endl;
	string tablica[3] = { "Olusia","Oleńka","Aleksandra" };
	cout << tablica[1] << endl;
	*/
	string imiona[] = { "Arek","Darek","Jarek","Kanarek" };

	for (int i = 0; i < 4; i++) {
		cout << imiona[i] << endl;
	}
	
	return 0;
}
