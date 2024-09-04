#include <stdio.h>

int main () {
    int taille;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    int T[taille];
    printf("Saisir les éléments du tableau : \n");
    for(int i=0; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    int somme=0;
    for(int i=0; i<taille; i++) {
        somme += T[i];
    }
    float moyenne = (float)somme/taille;
    printf("la moyenne est : %.2f", moyenne);
    return 0;
}