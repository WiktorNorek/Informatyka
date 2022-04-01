#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int main() {

	chrono::system_clock::time_point start = chrono::system_clock::now();

	int n; // ilosc
	int lp = 0; //pierwsze
	int p = 2; // liczby zwykłe
	bool x;

	cout << "Ile liczb" << endl;
	cin >> n;

	while (lp < n) {
		x = true;

		for (int d = 2; d < p - 1; d++) {
			if (p % d == 0) {
				x = false;
			}
		}
		if (x == true) {
			cout << p << ", ";
			lp = lp + 1;
		}
		p = p + 1;
	}
	chrono::system_clock::time_point end = chrono::system_clock::now();

	cout << endl;
	elapsed_seconds += end - start;
	cout << "\nCzas: " << endl;
	cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count() << "\t milliseconds\n";
	cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";
}