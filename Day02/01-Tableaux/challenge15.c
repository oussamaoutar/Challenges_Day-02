#include <stdio.h>

int main () {
    int taille1, taille2;
    printf("Saisir le nombre des éléments à ajouter au 1er tableau : ");
    scanf("%d", &taille1);
    printf("Saisir le nombre des éléments à ajouter au 2ème tableau : ");
    scanf("%d", &taille2);
    int taille_fusion = taille1 + taille2;
    int T1[taille1], T2[taille2], T_fusion[taille_fusion];
    printf("Saisir les éléments du 1er tableau : \n");
    for(int i=0; i<taille1; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T1[i]);
        T_fusion[i] = T1[i];
    }
    printf("Saisir les éléments du 2ème tableau : \n");
    for(int i=0; i<taille2; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T2[i]);
        T_fusion[taille1+i] = T2[i];
    }
    printf("Table fusion : \n");
    for(int i=0; i<taille_fusion; i++) {
        printf("%d\n",T_fusion[i]);
    }
    return 0;
}