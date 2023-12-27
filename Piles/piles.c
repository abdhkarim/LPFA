#include "piles.h"

pPile nvlle_pile(void)
{
    return NULL;
}

bool pile_est_vide(pPile pile1)
{
    if(pile1 == NULL)
    {
        return 1;
    }
    return 0;
}

pPile push_pile(pPile pile1, int x)
{
    pPile eltPile1 = malloc(sizeof(EltPile));
    if(eltPile1 == NULL)
    {
        fprintf(stderr, "Erreur d'allocation");
        exit(EXIT_FAILURE);
    }

    eltPile1->data = x;
    eltPile1->next = pile1;

    return eltPile1;
}

pPile effacer_pile(pPile pile1)
{
    pPile EltPile;

    if(pile_est_vide(pile1))
        return nvlle_pile();

    EltPile = pile1->next;
    free(pile1);

    return effacer_pile(EltPile);
}

pPile effacer_pilev2(pPile pile1)
{
    while(!pile_est_vide(pile1))
    {
        pile1 = pop_pile(pile1);
    }
    return nvlle_pile();
}

void afficher_pile(pPile pile1)
{
    if(pile_est_vide(pile1))
    {
        printf("La pile est vide. Rien a afficher\n");
        return;
    }
    while(!pile_est_vide(pile1))
    {
        printf("[%d]\n", pile1->data);
        pile1 = pile1->next;
    }

}

pPile pop_pile(pPile pile1)
{
    pPile suitePile;

    if(pile_est_vide(pile1))
    {
        return nvlle_pile();
    }
        suitePile = pile1->next;
        free(pile1);

        return suitePile;
}

int longueur_pileRec(pPile pile1)
{
    if(pile_est_vide(pile1))
    {
        return 0;
    }
    return 1 + longueur_pileRec(pile1->next);

}

int affiche_sommet_pile(pPile pile1)
{
    if(pile_est_vide(pile1))
    {
        printf("Pas de sommet");
    }

    return pile1->data;
}

int premier_element_pile(pPile pile1)
{
    if(pile_est_vide(pile1))
    {
        printf("La pile est vide");
    }
    pPile courant = pile1;
    pPile suivant = pile1->next;

    while(suivant!=NULL)
    {
        courant = courant->next;
        suivant = suivant->next;
    }
    return courant->data;

}

int nb_occurences_pile(pPile pile1, int x)
{
    int cpt = 0; // Initialize cpt to 0

    if(pile_est_vide(pile1)) 
    {
        return 0;
    }

    if(pile1->data == x) // Check if the current element is equal to x
    {
        cpt++;   
    }

    return cpt + nb_occurences_pile(pile1->next, x); // Recursive call
}

int element_est_present(pPile pile1, int x)
{
    if(pile_est_vide(pile1))
    {
        return 0;
    }
    if(pile1->data == x) // Check if the current element is equal to x
    {
        return 1;   
    }
    else {
        return nb_occurences_pile(pile1->next, x); // Recursive call
    }

}
