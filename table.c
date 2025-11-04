#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    printf("Quelle table faut-il calculer ?");
    scanf("%d", &N);
    for (int i=1;i<11;i++){
        int prod = N*i;
        printf("%d * %d = %d \n",i,N,prod);
    }
    return EXIT_SUCCESS;
}