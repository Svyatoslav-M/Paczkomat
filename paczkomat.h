//Wersja dla ambitnych

#include <string>
#include <iostream>

using namespace std;

class skrzynka {
private:
	float wysokosc;
	float szerokosc;
public:
	skrzynka(float wys, float szer) {
		wysokosc = wys;
		szerokosc = szer;
	}
	bool wloz_paczke(bool czy_pelna, float wys, float szer);
	bool zawartoscskr();
};

class paczkomat {
private:
	static const int ile_paczkomat = 12;
	skrzynka *wsk_zar[ile_paczkomat];
	bool zajeta[ile_paczkomat];
	skrzynka *wsk_zar2[ile_paczkomat];

public:
	paczkomat() {
		for (int i = 0; i < ile_paczkomat; i++) {
			wsk_zar[i] = NULL;
			zajeta[i] = false;
			wsk_zar2[i] = false;
		}
	}
	~paczkomat() {
		for (int i = 0; i < ile_paczkomat; i++) {
			delete[] wsk_zar[i];
			wsk_zar[i] = NULL;
		}
	}
	int skr_wys[12] = { 10,10,10,10,10,20,20,20,20,20,50,50 };
	int skr_szer[12] = { 10,10,10,10,10,20,20,20,20,20,50,50 };
	string pin_tab[12] = { "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0" };
	string pincode;


	void wloz_paczke1(int ID_skrzynki, float wys, float szer);
	void wyszwietl();
	void wyjmowanie(int ID_skrzynki);
	void pin(int ID_skrzynki);
	void zawartosc(int ID_skrzynki);
};