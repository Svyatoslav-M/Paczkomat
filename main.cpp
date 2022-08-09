//Wersja dla ambitnych

#include <iostream>
#include <cstdlib>
#include "paczkomat.h"

using namespace std;

int main(int argc, char *argv[]) {

	paczkomat paczkomat;

	int wybor, wys, szer, num;


	cout << "\n\tProgram Paczkomat - wybier dzialanie" << endl;

	while (1) {

		cout << "\n\t1 - pokaz zawartosc"
			<< "\n\t2 - polozyc paczku"
			<< "\n\t3 - wyjac paczku"
			<< "\n\t4 - pokazac zawartosc skrzynki"
			<< "\n\t0 - koniec" << endl;
		cout << endl << "\n\tTwoj wybor "; cin >> wybor;

		switch (wybor) {

		case 0:

			cout << "\n\tDo widzenia!" << endl;
			cout << endl; system("pause"); return 0;

		case 1:

			paczkomat.wyszwietl();
			break;

		case 2:
			cout << "\n\tPodaj numer skrzynki (min. 1 & maks. 12)  "; cin >> num;

			while (1 > num || num > 12) {
				cout << "\n\tNie mamy takich skrzyniek! Podaj jeszcze raz "; cin >> num;
			}
			cout << "\n\tPodaj wysokosc "; cin >> wys;
			cout << "\n\tPodaj szyrokosc "; cin >> szer;
			while (wys < 1 || szer < 1) {
				cout << "\n\tWysokosc lub szerokoszc nie moze byc mniej niz 1" << endl;
				cout << "\n\tPodaj wysokosc "; cin >> wys;
				cout << "\n\tPodaj szyrokosc "; cin >> szer;
			}
			paczkomat.wloz_paczke1(num - 1, wys, szer);
			break;

		case 3:
			cout << "\n\tPodaj numer skrzynki (min. 1 & maks. 12)  "; cin >> num;

			while (1 > num || num > 12) {
				cout << "\n\tNie mamy takich skrzyniek! Podaj jeszcze raz "; cin >> num;
			}
			paczkomat.wyjmowanie(num - 1);
			break;

		case 4:
			cout << "\n\tPodaj numer skrzynki (min. 1 & maks. 12)  "; cin >> num;

			while (1 > num || num > 12) {
				cout << "\n\tNie mamy takich skrzyniek! Podaj jeszcze raz "; cin >> num;
			}
			paczkomat.zawartosc(num - 1);
			break;
		}

	}

	cout << endl; system("pause"); return 0;
}