#include <stdio.h>

int main () {
    int taille;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    int T[taille];
    for(int i=0; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("Votre tableau : \n");
    for(int i=0; i<taille; i++) {
        printf("%d\n", T[i]);
    }
    return 0;
}