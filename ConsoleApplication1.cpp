#include <iostream>
using namespace std;

class Zwierze
{
public:
	string gatunek;
	string imie;
	int wiek;
public:
	Zwierze() {
		gatunek = "koza";
		imie = "brak";
		wiek = 0;
		cout << "To ja\n";
	}

	Zwierze(string imie = "Mandzio", int wiek = 30) {
		this->imie = imie;
		this->wiek = wiek;
	}
	~Zwierze() {
		cout << "hehehaha grrr\n";
		cout << "sadfg\n";
	}

	void pokaz_wiek() {
		cout << "wiek = " << wiek << endl;
	}
	void dodaj_zwierze()
	{
		cout << endl << "DODAWANIE NOWEGO ZWIERZECIA DO BAZY: " << endl;
		cout << "Podaj gatunek: ";
		cin >> gatunek;
		cout << "Podaj imie: ";
		cin >> imie;
		cout << "Podaj wiek: ";
		cin >> wiek;
	}

	void glos()
	{
		if (gatunek == "kot")   cout << imie << " lat " << wiek << ": Miau!";
		else if (gatunek == "koza")  cout << imie << " lat " << wiek << ": Beeeee!";
		else if (gatunek == "krowa") cout << imie << " lat " << wiek << ": Muuuuu!";
		else cout << "nieznany gatunek! Moze jakies UFO?!";
	}
};
int main()
{
	/*Zwierze z;
	z.gatunek="pies";
	cout << "gatunek: "<<z.gatunek<<endl;
	z.imie = "Reksio";
	cout << "imie: " << z.imie << endl;
	z.wiek = 5;
	cout << "wiek: " << z.wiek << endl;
	z.glos();
*/
	Zwierze z1, z4, z5;
	cout << z1.gatunek << endl;
	z1.gatunek = "kot";
	z1.pokaz_wiek();
	cout << z1.gatunek << endl;
	/*z1.dodaj_zwierze();
	z1.glos();

	Zwierze z2;
	z2.dodaj_zwierze();
	z2.glos();*/
}