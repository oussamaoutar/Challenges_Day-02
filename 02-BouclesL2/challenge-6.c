#include <stdio.h>

int main () {
    int N;
    printf("Saisir un nombre : ");
    scanf("%d", &N);
    printf("les facteurs de %d :\n");
    for (int i=1; i<=N; i++) {
        if (N%i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}