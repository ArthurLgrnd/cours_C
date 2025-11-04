#include <stdio.h>
#include <stdlib.h>

int main(){
    int celsius;
    printf("Quel est la température en celsius ?\n");
    scanf("%d", &celsius);
    int far = celsius * 95 +32;
    printf("Il fait %d degrés fahrenheit\n", far);
    return EXIT_SUCCESS;
}