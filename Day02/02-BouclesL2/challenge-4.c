#include <stdio.h>

int main () {
    int N, reverse=0;
    printf("Saisir un nombre : ");
    scanf("%d", &N);
    while(N!=0) {
        reverse = reverse*10 + N%10;
        N /= 10;
    }
    printf("%d", reverse);
    return 0;
}