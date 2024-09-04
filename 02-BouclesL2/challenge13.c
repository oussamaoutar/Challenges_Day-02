#include <stdio.h>

int main () {
    int N, somme = 0;
    printf("Saisir un nombre : ");
    scanf("%d", &N);
    for(int i=1; i<=10; i++) {
        int produit = N*i;
        printf("%d * %d = %d\n", N, i, produit);
        somme += produit;
    }
    printf("la somme des produits est : %d", somme);
    return 0;
}