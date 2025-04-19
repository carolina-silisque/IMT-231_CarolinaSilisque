// 1. Clasificacion de numeros pares e impares

#include <stdio.h>
#include "funciones.h"

int main(void){
    int n;
    while (1){
        printf("ingrese un numero");
        scanf("%d", &n);
        if (n == -1){
            printf("fin del programa");
            break;
        }
        if(parImpar(n)){
            printf("el numero %d es par\n", n);
        } else {
            printf("el numero %d es impar\n", n);
        }
    }
return 0;

}