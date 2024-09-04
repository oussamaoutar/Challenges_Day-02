#include <stdio.h>

int fact(int N);
int fact(int N) {
    int F = 1;
    if(N == 0 || N == 1) return 1;
    else return N * fact(N - 1);
}

int main() {
    int N;
    printf("Saisir un entier : ");
    scanf("%d", &N);
    printf("%d! = %d", N, fact(N));
    return 0;
}