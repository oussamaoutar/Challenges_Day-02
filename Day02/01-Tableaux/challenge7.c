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

    for(int i=0; i<taille-1; i++) {
        int min_indice = i;
        for(int j=i+1; j<taille; j++) {
            if(T[j] < T[min_indice]) min_indice = j;
        }
        if(min_indice != i) {
            int temp = T[min_indice];
            T[min_indice] = T[i];
            T[i] = temp;
        }
    }    

    printf("Résultat : \n");
    for(int i=0; i<taille; i++) {
        printf("%d\n", T[i]);
    }
    return 0;
}