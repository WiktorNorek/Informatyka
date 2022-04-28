#include <iostream>
#include <cstring>
using namespace std;

void funk1(char tab[], int klucz2);

int main()
{
    char tab[1000];
    cout << "Podaj słowo: ";
    cin >> tab;
    cout << endl;
    int klucz;
    cout << "Podaj klucz: ";
    cin >> klucz;
    cout << endl;
    funk1(tab, klucz);
    cout << "Zaszyfrowane słowo: " << tab << endl;
    funk1(tab, -klucz);
    cout << "Odszyfrowane słowo: " << tab << endl;
}


void funk1(char tab[], int klucz2)
{
    int dl;
    dl = strlen(tab);
    if (!(klucz2 >= -26 && klucz2 <= 26)) {
        return;
    }

    if (klucz2 >= 0) {
        for (int i = 0; i < dl; i++) {
            if (tab[i] + klucz2 <= 'z') {
                tab[i] += klucz2;
            }
            else {
                tab[i] = tab[i] + klucz2 - 26;
            }
        }
    }
    else {
        for (int d = 0; d < dl; d++) {
            if (tab[d] + klucz2 >= 'a') {
                tab[d] += klucz2;
            }
            else {
                tab[d] = tab[d] + klucz2 + 26;
            }
        }
    }
}
