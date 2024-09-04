#include <stdio.h>

int main () {
    int taille, min;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    int T[taille];
    printf("T[0] = ");
    scanf("%d", &T[0]);
    min = T[0];
    for(int i=1; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        if(T[i] < min) min = T[i];
    }
    printf("le min est %d", min);
    return 0;
}