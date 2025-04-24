/*Ejercicio 8: Factorial interactivo
En un bucle innito, el usuario ingresa un número entero positivo.
El programa calcula e imprime el factorial de ese número usando una función.
El programa termina si el número ingresado es 0 o negativo.*/
#include <stdio.h>
#include "funciones.h"


int main(void){
    int num;
 

    while (1){
        printf("ingrese un numero para calcular su factorial: \n");
        printf("escriba un numero menor o igual a 0 para finalizar el programa. \n");
        scanf("%d", &num);
    
        if (num <= 0){
            break;
        }else if(num>0 ){
            factorial(num);
        }
    }
    

    return 0;
}