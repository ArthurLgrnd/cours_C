#include <stdio.h>
#include <stdlib.h>


int tab[5] = {1, 2, 7, 4, 5};

int somme_tableau(int tab[], size_t);

int max_tableau(int tab[], size_t taille)
{
    int max = tab[0];
    for (size_t i = 1; i < taille; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
}

int main()
{
    int somme = somme_tableau(tab, 5);
    printf("la somme du tableau est %d \n", somme);
    int max = max_tableau(tab, 5);
    printf("le max est %d\n", max);
    return EXIT_SUCCESS;
}

int somme_tableau(int tab[], size_t taille)
{
    int somme = 0;
    for (size_t i = 0; i < taille; i++)
    {
        somme += tab[i];
    }
    return somme;
}