#include "arbre.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Implémentation des fonctions */
	// Déclaration et initialisation manuelle d'un noeud
	pArbre init_arbre(int valeur, pArbre G, pArbre D)
    {
        pArbre x = malloc(sizeof(Arbre));
        x->elt = valeur;
        x->filsG = G;
        x->filsD = D;
        return x;
    }

	// Parcours de l'arbre de gauche a la racine puis a droite 
	void parcoursGRD(pArbre racine)
    {
        if(racine != NULL)
        {
            parcoursGRD(racine->filsG);
            printf(" %d ", racine->elt);
            parcoursGRD(racine->filsD);
        }
    }

    // On commence par la racine puis on va vers la gauche puis directement a droite
	void parcoursRGD(pArbre racine) 
    {
        if(racine != NULL)
        {
            printf(" %d ", racine->elt);
            parcoursGRD(racine->filsG);
            parcoursGRD(racine->filsD);
        }
    }
    
    // On commence par la gauche, puis par la droite et on remonte pour finir sur la racine
	void parcoursGDR(pArbre racine)
    {
        if(racine != NULL)
        {   
            parcoursGRD(racine->filsG);
            parcoursGRD(racine->filsD);
            printf(" %d ", racine->elt);
        }
    }

    // 
    bool noeud_est_feuille(pArbre racine)
    {
        if(racine->filsD == NULL && racine->filsG == NULL)
            return 1;
        else
        {
            return 0;
        }
    }

	int somme_des_noeuds(pArbre racine) {
    if (racine == NULL) {
        return 0;
    }
    // La valeur du nœud courant
    int elt1 = racine->elt;

    // Appels récursifs pour les sous-arbres gauche et droit
    int sommeGauche = somme_des_noeuds(racine->filsG);
    int sommeDroite = somme_des_noeuds(racine->filsD);

    // Additionner la valeur du nœud courant avec les sommes des sous-arbres
    return elt1 + sommeGauche + sommeDroite;
}


	int hauteur_arbre(pArbre racine)
    {
        if(racine==NULL)
        {
            return 0;
        }
        int haut_D = hauteur_arbre(racine->filsD);
        int haut_G = hauteur_arbre(racine->filsG);
        // Appel recursif pour parcourir l'arbre et remonter
        return 1 +max(haut_D, haut_G); // renvoie la hauteur maximale entre les elts de gauceh et les elet de droite
    }

	// Manipulations diverse d'un arbre 
	pArbre Miroir (pArbre racine);
	pArbre Retourx2 (pArbre racine);