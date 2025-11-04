#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    printf("Donnez un premier entier");
    scanf("%d",&a);
    printf("Donnez un deuxième entier");
    scanf("%d",&b);
    int somme = a+b;
    int diff = a-b;
    int prod = a*b;
    float div = a/b;
    printf("La somme est %d, la différence est %d, le produit est %d, le quotient est %f \n",somme,diff,prod,div);
    return EXIT_SUCCESS;
}