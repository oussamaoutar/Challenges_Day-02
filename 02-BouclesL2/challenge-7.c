#include <stdio.h>

int main () {
    int N, x=0, y=1;
    printf("Saisir un entier : ");
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        printf("%d ",x);
        int temp = x;
        x = y;
        y += temp;
    }
    return 0;
}