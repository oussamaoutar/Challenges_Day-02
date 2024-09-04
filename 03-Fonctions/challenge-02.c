#include <stdio.h>

int produit(int x, int y);
int produit(int x, int y) {
    return x*y;
}

int main() {
    int a, b;
    printf("Saisir 2 entiers : ");
    scanf("%d%d", &a, &b);
    printf("%d * %d = %d", a, b, produit(a, b));
    return 0;
}