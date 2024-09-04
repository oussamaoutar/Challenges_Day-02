#include <stdio.h>

int main () {
    int taille;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    int T[taille], T_inverse[taille];
    for(int i=0; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    for(int i=0; i<taille; i++) {
        T_inverse[taille-1-i] = T[i];
    }
    printf("Tableau inversé : \n");
    for(int i=0; i<taille; i++) {
        printf("%d\n", T_inverse[i]);
    }
    return 0;
}