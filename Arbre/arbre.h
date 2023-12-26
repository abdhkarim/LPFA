#ifndef __TREE__H__
#define __TREE__H__

/* Fichiers d'en-tête */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/* Structure d'un Arbre */
typedef struct Arbre
{
	int elt;
	struct Arbre *filsG;
	struct Arbre *filsD;
}Arbre, *pArbre;


/* Implémentation des fonctions */
	// Déclaration et initialisation manuelle d'un noeud
	pArbre init_arbre(int valeur, pArbre G, pArbre D);

	// Parcours de l'arbre 
	void parcoursGRD(pArbre racine);
	void parcoursRGD(pArbre racine);
	void parcoursGDR(pArbre racine);

	// Feuille, taille, somme des noeuds etc...
	bool noeud_est_feuille(pArbre racine);
	int somme_des_noeuds(pArbre racine);
	int hauteur_arbre(pArbre racine);


	// Manipulations diverse d'un arbre 
	pArbre Miroir (pArbre racine);
	pArbre Retourx2 (pArbre racine);



#endif