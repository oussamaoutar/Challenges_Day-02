#include <stdio.h>

int main () {
    int n, count=0;
    printf("Saisir n : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(n%i==0) count++;
        }
        if(count==2) {
            printf("%d ",i);
        }
    }
    return 0;
}