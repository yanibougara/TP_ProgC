tableauptr.c



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11

void afficher_int(const int t, int n) {
    const intp = t;
    const int fin = t + n;
    while (p < fin) {
        printf("%d",p);
        if (p < fin - 1) {
            printf(", ");
        }
        p++;
    }
    printf("\n");
}

void afficher_float(const float t, int n) {
    const floatp = t;
    const float fin = t + n;
    while (p < fin) {
        printf("%.2f",p);
        if (p < fin - 1) {
            printf(", ");
        }
        p++;
    }
    printf("\n");
}

int main(void) {
    int t_int[N];
    float t_float[N];

    srand((unsigned int)time(NULL));

    int pi = t_int;
    floatpf = t_float;
    int fin_i = t_int + N;
    floatfin_f = t_float + N;


    while (pi < fin_i && pf < fin_f) {
        pi = rand() % 200;                    / 0..199 */
        pf = (float)(rand() % 1000) / 50.0f;  / valeur flottante /
        pi++;
        pf++;
    }

    printf("Tableau int avant modif :\n");
    afficher_int(t_int, N);

    printf("Tableau float avant modif :\n");
    afficher_float(t_float, N);

    / Multiplication par 3 pour indices pairs */
    pi = t_int;
    pf = t_float;

    for (int index = 0; index < N; index++) {
        if (index % 2 == 0) {
            (t_int + index) =(t_int + index) * 3;
            (t_float + index) =(t_float + index) * 3.0f;
        }
    }

    printf("\nTableau int apres x3 sur indices pairs :\n");
    afficher_int(t_int, N);

    printf("Tableau float apres x3 sur indices pairs :\n");
    afficher_float(t_float, N);

    return 0;
}
