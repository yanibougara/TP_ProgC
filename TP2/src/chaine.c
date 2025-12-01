
#include <stdio.h>

int my_strlen(const char s) {
    const charp = s;
    while (p != '\0') {
        p++;
    }
    return (int)(p - s);
}

void my_strcpy(chardest, const char src) {
    while (src != '\0') {
        dest =src;
        dest++;
        src++;
    }
    dest = '\0';
}

void my_strcat(chardest, const char src) {
    while (dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        dest =src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main(void) {
    char texte1[100] = "Hello";
    char texte2[100] = " World!";
    char copie[100];
    char fusion[200];

    int len1 = my_strlen(texte1);
    int len2 = my_strlen(texte2);

    my_strcpy(copie, texte1);

    my_strcpy(fusion, texte1);
    my_strcat(fusion, texte2);

    printf("texte1 = "%s" (longueur = %d)\n", texte1, len1);
    printf("texte2 = "%s" (longueur = %d)\n", texte2, len2);
    printf("copie   = "%s"\n", copie);
    printf("fusion  = "%s"\n", fusion);

    return 0;
}
