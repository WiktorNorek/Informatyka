#include <iostream>
using namespace std;

int main() {
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
	return 0;
}
