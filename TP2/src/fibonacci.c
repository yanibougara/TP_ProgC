#include <stdio.h>

int main(void) {
    int n;

    printf("Entrer la valeur de n : ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Valeur de n invalide.\n");
        return 1;
    }

    int terme_prec2 = 0;  /* u0 /
    int terme_prec1 = 1;  / u1 */

    if (n == 0) {
        printf("%d\n", terme_prec2);
        return 0;
    }

    printf("%d, %d", terme_prec2, terme_prec1);

    for (int k = 2; k <= n; k++) {
        int terme = terme_prec1 + terme_prec2;
        printf(", %d", terme);
        terme_prec2 = terme_prec1;
        terme_prec1 = terme;
    }

    printf("\n");

    return 0;
}
