#include <stdio.h>

int max(int x, int y);
int max(int x, int y) {
    if(x > y) return x;
    else return y;
}

int main() {
    int a, b;
    printf("Saisir 2 entiers : ");
    scanf("%d%d", &a, &b);
    printf("le max est : %d", max(a, b));
    return 0;
}