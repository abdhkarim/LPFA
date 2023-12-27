#ifndef __FILES_H__
#define __FILES_H__

// En tetes 
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Structures
typedef struct EltFile{
	int data ;
	struct EltFile *next ;
}EltFile, *pFile ;



/* RAPPEL : pour faire de la compilation séparé, compilez comme ça 
	gcc -c votre_fichier

*/

// Paramètres de la file
static pFile first = NULL;  /* on garde en memoire l'élément qu'on a en tête de file -> pas besoin 
de faire des parcours */
static pFile last = NULL; /* on garde en memoire l'élément qu'on a en tête de file -> pas besoin 
de faire des parcours */
static int nb_elements = 0; 

// Affichage de la file 
bool file_est_vide();
int longueur_File();
int premier_elt_file();
int dernier_elt_file();
void afficher_File();
void push_dans_file(int x);
void pop_dans_file();
void effacer_file();




// Recherche element liste
int nb_occurences_pile(pFile file1, int x);
int element_est_present(pFile file1, int x);

#endif