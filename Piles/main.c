#include "piles.h"

int main ()
{

    pPile stack = nvlle_pile();
    afficher_pile(stack);

    printf("\n ------------------------ \n");

    stack = push_pile(stack, 14);
    stack = push_pile(stack, 47);
    stack = push_pile(stack, 47);
    stack = push_pile(stack, 23);
    stack = push_pile(stack, 31);
    afficher_pile(stack);
    printf("Sommet actuel : %d\n", affiche_sommet_pile(stack));
    printf("Premier element de la pile actuelle : %d\n", premier_element_pile(stack));
    printf("Longueur de la pile actuelle : %d\n", longueur_pileRec(stack));
    int nb_1 = nb_occurences_pile(stack, 47);
    printf("Nombre d'occurences dans la pile du nombre 47 : %d\n", nb_1);



    printf("\n ------------------------ \n");

    stack = effacer_pilev2(stack);
    afficher_pile(stack);
    
    return 0;
}