#include <stdio.h>

int min(int x, int y);
int min(int x, int y) {
    if(x < y) return x;
    else return y;
}

int main() {
    int a, b;
    printf("Saisir 2 entiers : ");
    scanf("%d%d", &a, &b);
    printf("le min est : %d", min(a, b));
    return 0;
}