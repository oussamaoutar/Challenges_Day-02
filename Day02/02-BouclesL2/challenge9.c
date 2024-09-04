#include <stdio.h>

int main () {
    int base, exposant, res=1;
    int i=1;
    printf("Donner la base : ");
    scanf("%d", &base);
    printf("Donner la exposant : ");
    scanf("%d", &exposant);
    while(i<=exposant) {
        res *= base;
        i++;
    } 
    printf("%d", res);
    return 0;
}