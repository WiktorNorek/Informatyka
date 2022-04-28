#include <iostream>
#include <cstring>
using namespace std;

void funk1(char tab[], int klucz2);

int main()
{
    char tab[1000];
    int klucz;
    funk1(tab, klucz);
}


void funk1(char tab[], int klucz2)
{
    int dl;
    dl = strlen(tab);
    if (!(klucz2 >= -26 && klucz2 <= 26)) {
        return;
    }

    if (klucz2 >= 0) {
        for (int i; i < dl; i++) {
            if (tab + klucz2 <= 'z') {
                tab += klucz2;
            }
            else {
                tab = tab + klucz2 - 26;
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
