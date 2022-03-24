#include <iostream>
using namespace std;

int main() {
	int n;
	int lp = 0;
	int p = 2;
	int d;

	cout << "Ile liczb" << endl;
	cin >> n;

	while (lp < n)
		for (int d = 2; d < p - 1; d++) {
			if (p% d = 0) {
				p = p + 1;
			}
		}
	return 0;
}


