#include <stdio.h>

int verif_parite(int x);
int verif_parite(int x) {
    if(x % 2 == 0) return 1;
    else return 0;
}

int main() {
    int a;
    printf("Saisir un entier : ");
    scanf("%d", &a);
    if(verif_parite(a)) printf("%d et pair", a);
    else printf("%d est impair", a);
    return 0;
}