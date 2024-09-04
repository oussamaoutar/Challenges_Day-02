#include <stdio.h>

int main () {
    int N, F=1;
    printf("Saisir un entier : ");
    scanf("%d", &N);
    if(N>=2) {
        for(int i=1; i<=N; i++) {
            F *= i;
        }
    }
    else printf("impossible de calculer le factorielle d'un entier négatif");
    printf("%d! = %d", N, F);
    return 0;
}