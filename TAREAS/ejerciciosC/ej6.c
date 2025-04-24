/*Ejercicio 6: Comparar dos números
En un bucle innito, el usuario ingresa dos números enteros.
El programa debe indicar cuál es mayor o si son iguales, utilizando una función.
El programa termina cuando el usuario ingresa dos ceros.*/

#include<stdio.h>
#include "funciones.h"

int main(void){
int n1, n2;
int resultado;
    while(1){

        printf("ingrese el primer numero: \n");
        scanf ("%d", &n1);
        printf("ingrese el segundo numero: \n");
        scanf ("%d", &n2);


        resultado =  comparar_numeros( n1,  n2);
        if (n1==0 && n2==0){
            printf("fin del programa \n\n");
            break;
        }
    
    }

return 0;
}