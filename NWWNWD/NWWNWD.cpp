#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int main()
{
	chrono::system_clock::time_point start = chrono::system_clock::now();

	int a;
	int b;
	int a1;
	int b1;
	int a2;
	int b2;
	int iloczyn;
	int nww;

	cout << "Podaj liczbę a: ";
	cin >> a;
	cout << "Podaj liczbę b: ";
	cin >> b;

	a1 = a;
	b1 = b;
	a2 = a;
	b2 = b;


	while (a1 != b1) {
		if (a1 < b1)
			b1 = b1 - a1;
		else
			a1 = a1 - b1;
	}
	cout << "NWD: " << a1 << endl;

	iloczyn = a2 * b2;
	while (a2 != b2) {
		if (a2 < b2)
			b2 = b2 - a2;
		else
			a2 = a2 - b2;
	}
	nww = iloczyn / a2;
	cout << "NWW: " << nww << endl;

	chrono::system_clock::time_point end = chrono::system_clock::now();

	cout << endl;
	elapsed_seconds += end - start;
	cout << "\nCzas: " << endl;
	cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count() << "\t milliseconds\n";
	cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";
}