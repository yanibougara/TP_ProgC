#include <stdio.h>

int puissance(int base, int exposant) {
    int res = 1;
    while (exposant > 0) {
        res = res * base;
        exposant--;
    }
    return res;
}

int main(void) {
    int a = 2;
    int b = 3;

    int resultat = puissance(a, b);

    printf("%d^%d = %d\n", a, b, resultat);

    return 0;
} 
