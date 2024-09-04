#include <stdio.h>

int somme(int x, int y);
int somme(int x, int y) {
    return x+y;
}

int main() {
    int a, b;
    printf("Saisir 2 entiers : ");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d", a, b, somme(a, b));
    return 0;
}