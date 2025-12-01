ptrvariables.c



#include <stdio.h>

int main(void) {
    char c = 'Z';
    short s = -321;
    int n = 123456;
    long int ln = -987654L;
    long long int lln = 0x1122334455667788LL;
    float f = 3.5f;
    double d = 2.0;
    long double ld = 4.0L;

    char *pc = &c;
    short *ps = &s;
    int *pn = &n;
    long int *pln = &ln;
    long long int *plln = &lln;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    union {
        float f;
        unsigned int u;
    } uf;

    union {
        double d;
        unsigned long long u;
    } ud;

    printf("Avant modification :\n");
    printf(" c   : adresse = %p, valeur = %02x\n", (void*)pc, (unsigned char)c);
    printf(" s   : adresse = %p, valeur = %hx\n", (void*)ps, (unsigned short)s);
    printf(" n   : adresse = %p, valeur = %x\n",  (void*)pn, (unsigned int)n);
    printf(" ln  : adresse = %p, valeur = %lx\n", (void*)pln, (unsigned long)ln);
    printf(" lln : adresse = %p, valeur = %llx\n", (void*)plln, (unsigned long long)lln);

    uf.f = f;
    ud.d = d;
    printf(" f   : adresse = %p, bits = %08x\n", (void*)pf, uf.u);
    printf(" d   : adresse = %p, bits = %016llx\n", (void*)pd, (unsigned long long)ud.u);
    printf(" ld  : adresse = %p\n", (void*)pld);


    *pc = 'A';
    *ps = 123;
    *pn = 42;
    *pln = 123456L;
    *plln = 0xAABBCCDDEEFF0011LL;
    *pf = 1.25f;
    *pd = 10.0;
    *pld = 2.5L;

    uf.f = f;
    ud.d = d;

    printf("\nApres modification :\n");
    printf(" c   : adresse = %p, valeur = %02x\n", (void*)pc, (unsigned char)c);
    printf(" s   : adresse = %p, valeur = %hx\n", (void*)ps, (unsigned short)s);
    printf(" n   : adresse = %p, valeur = %x\n",  (void*)pn, (unsigned int)n);
    printf(" ln  : adresse = %p, valeur = %lx\n", (void*)pln, (unsigned long)ln);
    printf(" lln : adresse = %p, valeur = %llx\n", (void*)plln, (unsigned long long)lln);

    printf(" f   : adresse = %p, bits = %08x\n", (void*)pf, uf.u);
    printf(" d   : adresse = %p, bits = %016llx\n", (void*)pd, (unsigned long long)ud.u);
    printf(" ld  : adresse = %p\n", (void*)pld);

    return 0;
}
