couleurs.c



#include <stdio.h>

#define NB_COULEURS 10

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main(void) {
    struct Couleur palette[NB_COULEURS];

    palette[0] = (struct Couleur){0xef, 0x78, 0x12, 0xff};
    palette[1] = (struct Couleur){0x2c, 0xc8, 0x64, 0xff};
    palette[2] = (struct Couleur){0x00, 0x00, 0x00, 0xff};
    palette[3] = (struct Couleur){0xff, 0x00, 0x00, 0xff};
    palette[4] = (struct Couleur){0x00, 0xff, 0x00, 0xff};
    palette[5] = (struct Couleur){0x00, 0x00, 0xff, 0xff};
    palette[6] = (struct Couleur){0xaa, 0xbb, 0xcc, 0xff};
    palette[7] = (struct Couleur){0x11, 0x22, 0x33, 0xff};
    palette[8] = (struct Couleur){0x44, 0x55, 0x66, 0xff};
    palette[9] = (struct Couleur){0x77, 0x88, 0x99, 0xff};

    for (int i = 0; i < NB_COULEURS; i++) {
        printf("Couleur %d :\n", i + 1);
        printf(" Rouge : %u\n", palette[i].r);
        printf(" Vert  : %u\n", palette[i].g);
        printf(" Bleu  : %u\n", palette[i].b);
        printf(" Alpha : %u\n\n", palette[i].a);
    }

    return 0;
}
