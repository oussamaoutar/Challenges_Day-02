#include <stdio.h>

int main () {
    int taille, somme = 0;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    int T[taille];
    for(int i=0; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        somme += T[i];
    }
    printf("la somme = %d", somme);
    return 0;
}