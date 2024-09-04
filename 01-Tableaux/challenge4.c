#include <stdio.h>

int main () {
    int taille, max;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    int T[taille];
    printf("T[0] = ");
    scanf("%d", &T[0]);
    max = T[0];
    for(int i=1; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        if(T[i] > max) max = T[i];
    }
    printf("le max est %d", max);
    return 0;
}