#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int funkcja(int tab[], int szukana);

int main()
{
	chrono::system_clock::time_point start = chrono::system_clock::now();
	int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int szukana;
	cout << "Podaj liczbe ktora chcesz znalezc: ";
	cin >> szukana;

	if (funkcja(tab, szukana) == -1) {
		cout << "Podano niepawidłową liczbę";
	}
	else {
		cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie " << funkcja(tab, szukana);
	}
	chrono::system_clock::time_point end = chrono::system_clock::now();

	cout << endl;
	elapsed_seconds += end - start;
	cout << "\nCzas: " << endl;
	cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count() << "\t milliseconds\n";
	cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";
}

int funkcja(int tab[], int szukana)
	{
	int l;
	int p;
	int sr;

	l = 0;
	p = 15;
	sr = (l + p) / 2;


	while (l <= p) {
		if (tab[sr] = szukana) {
			return sr;
		}
		if (tab[sr] > szukana) {
			p = sr - 1;
		}
		else {
			l = sr + 1;
		}
		sr = (l + p) / 2;
		return -1;
	}

}