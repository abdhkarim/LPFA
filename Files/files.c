#include "files.h"
#include <stdio.h>
#include <stdlib.h>

bool file_est_vide(void)
{
    if(first == NULL && last == NULL)
        return true;

    return false;

}

int longueur_File()
{
    return nb_elements;
}

int premier_elt_file()
{
    if(file_est_vide())
        exit(1);

    return first->data;
}
int dernier_elt_file()
{
    if(file_est_vide())
        exit(1);

    return last->data;
}

void afficher_File()
{
    if(file_est_vide())
    {
        printf("la liste est vide, rien a afficher.");
        return;
    }

    pFile tmp = first;

    while(tmp != NULL)
    {
        printf("[%d]", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

void push_dans_file(int x)
{
    pFile Elt;

    Elt = malloc(sizeof(*Elt));

    if(Elt == NULL)
    {
        fprintf(stderr, "Erreur : problème d'allocation dynamique\n");
        exit(EXIT_FAILURE);
    }
    Elt->data = x;
    Elt->next = NULL;

    if(file_est_vide())
    {
        first = Elt;
        last = Elt;
    }
    else 
    {
        last->next = Elt;
        last = Elt;
    }
    nb_elements++;

}


void pop_dans_file()
{
    if(file_est_vide())
    {
        printf("Rien a retirer, la file st vide");
        return;
    }
    pFile tmp = first;
    if(first == last)
    {
        first = NULL;
        last = NULL;
    }
    else {
        first = first->next;
    }

    free(tmp);
    nb_elements--;
}

void effacer_file()
{
    if(file_est_vide())
    {
        printf("la file est vide");
        return ;
    }
    while(!file_est_vide())
    {
        pop_dans_file();
    }
}
