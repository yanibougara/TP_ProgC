etudiant.c



#include <stdio.h>

#define EFFECTIF 5

int main(void) {
    char noms[EFFECTIF][30] = {
        "Durand", "Lefevre", "Moreau", "Roux", "Garcia"
    };

    char prenoms[EFFECTIF][30] = {
        "Paul", "Julie", "Nadia", "Omar", "Emma"
    };

    char adresses[EFFECTIF][100] = {
        "10 rue des Lilas, Lyon",
        "5 avenue des Alpes, Lyon",
        "3 boulevard des Nations, Lyon",
        "2 place Bellecour, Lyon",
        "7 rue Victor Hugo, Lyon"
    };

    float notes_prog[EFFECTIF] = {13.5f, 15.0f, 9.5f, 17.0f, 11.0f};
    float notes_sys[EFFECTIF]  = {10.0f, 14.5f, 8.5f, 16.0f, 12.0f};

    for (int idx = 0; idx < EFFECTIF; idx++) {
        printf("Etudiant %d\n", idx + 1);
        printf(" Nom      : %s\n", noms[idx]);
        printf(" Prenom   : %s\n", prenoms[idx]);
        printf(" Adresse  : %s\n", adresses[idx]);
        printf(" Prog C   : %.1f\n", notes_prog[idx]);
        printf(" Sys Exp. : %.1f\n\n", notes_sys[idx]);
    }

    return 0;
}
