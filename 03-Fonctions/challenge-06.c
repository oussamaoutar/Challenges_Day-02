#include <stdio.h>

int fib(int x);
int fib(int x) {
    if(x == 1) return 0;
    else if (x == 2) return 1;
    else return fib(x - 1) + fib(x - 2);
}

int main() {
    int a;
    do {
        printf("Saisir un entier supérieur à 0 : ");
        scanf("%d", &a);
    } while(a <= 0);
    printf("F(%d) = %d", a, fib(a));
    return 0;
}