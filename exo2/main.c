#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp = fopen("exercice2.txt", "w+");

    if (fp == NULL)
    {
        printf("Le fichier texte.txt n'a pas pu être ouvert\n");
        return EXIT_FAILURE;
    }

    printf("Frere Jacques, frere Jacques Dormez-vous, dormez-vous ?\n");
    return 0;
}