/*Ejercicio 7: Contador de múltiplos de 3
El usuario ingresa números en un bucle infinito.
El programa cuenta cuántos múltiplos de 3 se han ingresado.
Finaliza cuando se ingresa -1 y muestra el total de múltiplos encontrados.*/


#include <stdio.h>
#include "funciones.h"

int main (void){
    int num ,contador =0;
    printf("contador de multiplos de 3 \n");
    while(1){
        printf("Ingrese un numero, o -1 para finalizar con el programa: \n");
        scanf("%d" , &num);
        if (num == -1){
            break;
        } else if (multiplo3 (num)){
                contador ++;
               
        }
        
        printf("se han ingresado %d numeros multiplos de 3 \n", contador);
    }

    return 0;
}