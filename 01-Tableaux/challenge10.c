#include <stdio.h>
#include <stdbool.h>

int main () {
    int taille;
    bool exists;
    printf("Saisir le nombre des éléments à ajouter : ");
    scanf("%d", &taille);
    int T[taille];
    printf("Saisir les éléments du tableau : \n");
    for(int i=0; i<taille; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    int N;
    printf("Saisir un entier : ");
    scanf("%d", &N);
    for(int i=0; i<taille; i++) {
        if(T[i] == N) {
            exists = true;
            break;
        }
    }
    if(exists) printf("%d est présent dans le tableau", N);
    else printf("%d n'existe pas dans le tableau", N);
    return 0;
}