#include <stdio.h>
#include <string.h>

char* inverse_chaine(char* chaine);
char* inverse_chaine(char* chaine) {
    int taille_chaine = strlen(chaine);
    char chaine_inversee[taille_chaine];
    for(int i=0; i<taille_chaine; i++) {
        chaine_inversee[taille_chaine - i-1] = chaine[i];
    }
    printf(chaine_inversee);
}

int main() {
    inverse_chaine("Hey");
    return 0;
}