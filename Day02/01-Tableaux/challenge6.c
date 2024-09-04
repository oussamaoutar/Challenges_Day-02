#include <stdio.h>

int main () {
    int taille, facteur;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    printf("Saisir le facteur : ");
    scanf("%d", &facteur);
    int T[taille];
    for(int i=0; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        T[i] *= facteur;
    }
    printf("Résultat : \n");
    for(int i=0; i<taille; i++) {
        printf("%d\n", T[i]);
    }
    return 0;
}