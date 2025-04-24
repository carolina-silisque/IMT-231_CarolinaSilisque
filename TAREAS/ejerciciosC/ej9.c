/*Ejercicio 9: Inversión de número
En un bucle infito, el usuario ingresa un número entero positivo.
Una función debe invertir el número (por ejemplo, 123 → 321) y mostrar el resultado.
El programa termina cuando el número ingresado tiene solo un dígito.*/


#include<stdio.h>
#include "funciones.h"


int main(void) {
    int num;

    while (1) {
        printf("Ingresa un número entero positivo (numero de un solo dígito para salir): ");
        scanf("%d", &num);

        // Terminar el programa si el número tiene solo un dígito
        if (num > 0 && num < 10) {
            printf("Fin del programa.\n");
            break;
        } else if (num < 0) {
            printf("Por favor, ingresa un número entero positivo.\n");
            continue;
        }else 
        invertir_numero(num);
        int resultado = invertir_numero(num);
        printf("El número invertido es: %d\n", resultado);
    }

    return 0;
}

