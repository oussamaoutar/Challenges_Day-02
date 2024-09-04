#include <stdio.h>

int main () {
    int taille;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    int T[taille], Copie[taille];
    for(int i=0; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        Copie[i] = T[i];
    }
    printf("Tableau original : \n");
    for(int i=0; i<taille; i++) {
        printf("%d\n", T[i]);
    }
    printf("Tableau copié : \n");
    for(int i=0; i<taille; i++) {
        printf("%d\n", Copie[i]);
    }
    return 0;
}