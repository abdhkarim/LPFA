#include "files.h"

int main ()
{
    printf("Taille de la file : %d\n", longueur_File());
    afficher_File();

    push_dans_file(14);
    printf("Taille de la file : %d\n", longueur_File());
    afficher_File();

    pop_dans_file();
    printf("Taille de la file : %d\n", longueur_File());
    afficher_File();

    return 0;
}