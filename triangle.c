#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    printf("Quelle est la taille du triangle ?");
    scanf("%d", &N);
    for (int i=1;i<=N;i++){
        for (int j=1;j<=i;j++){
            printf("x");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}