#include <stdio.h>

int main () {
    int L;
    printf("Saisir le nombre de lignes : ");
    scanf("%d",&L);
    for(int i=0; i<L; i++) {
        for(int j=i+1; j<L ; j++) printf(" ");
        for(int j=0; j<2*i+1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
