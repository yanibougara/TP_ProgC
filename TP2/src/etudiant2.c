etudiant2.c


#include <stdio.h>

#define EFFECTIF 5

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note_prog;
    float note_sys;
};

int main(void) {
    struct Etudiant liste[EFFECTIF] = {
        {"Durand", "Paul",  "10 rue des Lilas, Lyon",      13.5f, 10.0f},
        {"Lefevre", "Julie","5 avenue des Alpes, Lyon",    15.0f, 14.5f},
        {"Moreau", "Nadia", "3 boulevard des Nations, Lyon", 9.5f, 8.5f},
        {"Roux", "Omar",    "2 place Bellecour, Lyon",     17.0f, 16.0f},
        {"Garcia","Emma",   "7 rue Victor Hugo, Lyon",     11.0f, 12.0f}
    };

    for (int i = 0; i < EFFECTIF; i++) {
        printf("Etudiant %d\n", i + 1);
        printf(" Nom      : %s\n", liste[i].nom);
        printf(" Prenom   : %s\n", liste[i].prenom);
        printf(" Adresse  : %s\n", liste[i].adresse);
        printf(" Note Prog: %.1f\n", liste[i].note_prog);
        printf(" Note Sys : %.1f\n\n", liste[i].note_sys);
    }

    return 0;
}
