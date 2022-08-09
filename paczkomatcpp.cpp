//Wersja dla ambitnych

#include "paczkomat.h"


bool skrzynka::wloz_paczke(bool czy_pelna, float wys, float szer) {
	if (czy_pelna) {
		cout << "\n\tSkrzynka jest pelna" << endl;
		return false;
	}
	else if (wys <= 50 && szer <= 50) {
		cout << "\n\tRozmiar pasuje pod paczkomat" << endl;
		return true;
	}
	else {
		cout << "\n\tNie mozna polozyc, paczka za duza" << endl;
		return false;
	}
}

bool skrzynka::zawartoscskr() {
	cout << "\n\tWysokosc = " << wysokosc << endl;
	cout << "\n\tSzerekosc = " << szerokosc << endl;
	return 0;
}

void paczkomat::wloz_paczke1(int ID_skrzynki, float wys, float szer)
{
	if (!wsk_zar[ID_skrzynki]) {
		wsk_zar[ID_skrzynki] = new skrzynka(wys, szer);
		if (!wsk_zar[ID_skrzynki]->wloz_paczke(false, wys, szer)) {

			wsk_zar[ID_skrzynki] = NULL;
		}
		else {
			if (skr_wys[ID_skrzynki] < wys || skr_szer[ID_skrzynki] < szer) {
				cout << "\n\tSkrzynka jest za mala";
				wsk_zar[ID_skrzynki] = NULL;
			}
			else {
				if (skr_wys[ID_skrzynki] == 50) {
					cout << "\n\tPaczka znajduje sie w duzej skrzynkie";
				}
				else if (skr_wys[ID_skrzynki] == 20) {
					cout << "\n\tPaczka znajduje sie w sredniej skrzynkie";
				}
				else cout << "\n\tPaczka znajduje sie w malej skrzynkie";
				pin(ID_skrzynki);
			}
		}
	}
	else {
		cout << wsk_zar[ID_skrzynki]->wloz_paczke(true, wys, szer) << endl;
	}
}

void paczkomat::wyszwietl()
{
	for (int i = 0; i < ile_paczkomat; i++) {
		if (i < 5) {
			if (wsk_zar[i]) cout << "\tSkrzynka nr " << i + 1 << ": " << "jest PELNA " << "i mala" << endl;
			else cout << "\tSkrzynka nr " << i + 1 << ": " << "jest pusta " << "i mala" << endl;
		}
		else if (i < 10) {
			if (wsk_zar[i]) cout << "\tSkrzynka nr " << i + 1 << ": " << "jest PELNA " << "i srednia" << endl;
			else cout << "\tSkrzynka nr " << i + 1 << ": " << "jest pusta " << "i srednia" << endl;
		}
		else {
			if (wsk_zar[i]) cout << "\tSkrzynka nr " << i + 1 << ": " << "jest PELNA " << "i duza" << endl;
			else cout << "\tSkrzynka nr " << i + 1 << ": " << "jest pusta " << "i duza" << endl;
		}

	}
}

void paczkomat::wyjmowanie(int ID_skrzynki) {
	string pincode;
	if (wsk_zar[ID_skrzynki]) {
		if (pin_tab[ID_skrzynki] != "0") {
			cout << "\n\tPodaj PIN "; cin >> pincode;
			if (pin_tab[ID_skrzynki] == pincode) {
				cout << "\n\tPaczka wyjata" << endl;
				wsk_zar[ID_skrzynki] = NULL;
			}
			else {
				cout << "\n\tBledny PIN" << endl;
			}
		}
		else {
			cout << "\n\tPaczka wyjata" << endl;
			wsk_zar[ID_skrzynki] = NULL;
		}
	}
	else cout << "\n\tNie ma paczki w tej skrzynkie" << endl;
}

void paczkomat::pin(int ID_skrzynki) {
	if (wsk_zar[ID_skrzynki]) {
		cout << "\n\tCzy chciesh dodac 6-cyfrowyj PIN? Nie - 0; Tak - Podaj PIN: "; cin >> pincode;
		while (pincode.length() != 6 && pincode != "0") {
			cout << "\n\tBledny 6-cyfrowyj PIN! Nie podawac - 0; Tak - Podac PIN: "; cin >> pincode;
		}
		pin_tab[ID_skrzynki] = pincode;
	}
}

void paczkomat::zawartosc(int ID_skrzynki) {
	string pincode;
	if (wsk_zar[ID_skrzynki]) {
		if (pin_tab[ID_skrzynki] != "0") {
			cout << "\n\tPodaj PIN "; cin >> pincode;
			if (pin_tab[ID_skrzynki] == pincode) {
				cout << wsk_zar[ID_skrzynki]->zawartoscskr() << endl;
			}
			else {
				cout << "\n\tBledny PIN" << endl;
			}
		}
		else cout << wsk_zar[ID_skrzynki]->zawartoscskr() << endl;
	}
	else cout << "\n\tNie ma paczki w tej skrzynkie" << endl;
}