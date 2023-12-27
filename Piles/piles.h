#ifndef __PILES_H__
#define __PILES_H__

// En tetes 
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Structures
typedef struct EltPile{
	int data ;
	struct EltPile *next ;
}EltPile, *pPile ;



/* RAPPEL : pour faire de la compilation séparé, compilez comme ça 
	gcc -c votre_fichier

*/

// Affichage de la pile 
pPile nvlle_pile(void);
bool pile_est_vide(pPile pile1);
void afficher_pile(pPile pile1);
int affiche_sommet_pile(pPile pile1);
int premier_element_pile(pPile pile1);
int longueur_pileRec(pPile pile1);


// Retirer / ajouter un element
pPile pop_pile(pPile pile1);
pPile push_pile(pPile pile1, int x);
pPile effacer_pile(pPile pile1);
pPile effacer_pilev2(pPile pile1);

// Recherche element liste
int nb_occurences_pile(pPile pile1, int x);
int element_est_present(pPile pile1, int x);

#endif