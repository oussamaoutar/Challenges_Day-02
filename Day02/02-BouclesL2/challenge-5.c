#include <stdio.h>

int main () {
    int N, S;
    printf("Donner un nombre : ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++) S += i;
    printf("la somme = %d", S);
    return 0;
}