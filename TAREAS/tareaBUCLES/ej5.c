//5. Invertir una cadena de texto
#include <stdio.h>
#include <string.h>

int main(void) {
    char palabra[100];
    int nletras;

    printf("Ingrese una palabra: ");
    scanf("%c", palabra); 

    nletras = strlen(palabra);

    printf("Palabra invertida: ");
    for (int i = nletras - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }

    printf("\n");
    return 0;
}