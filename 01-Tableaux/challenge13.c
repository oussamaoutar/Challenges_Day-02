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
    for(int i=0; i<taille; i++) {
        if(T[i]%2!=0) printf("%d\n", T[i]);
    }
    return 0;
}