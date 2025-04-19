#include <stdio.h>
#include "funciones.h"

void saludo(void){
    printf("Hola desde una funcion\n");
}

int suma(int numero1, int numero2){
    int respuesta = numero1+numero2;
    return respuesta;
}

int resta(int numero1, int numero2){
    int respuesta = numero1-numero2;
    return respuesta;
}
int multiplicacion(int numero1, int numero2){
    int respuesta = numero1 * numero2;
    return respuesta;
}

float division(float num1, float num2) {
    if (num2 != 0) {
        float resultado = num1 / num2;
        printf("División: %.2f / %.2f = %.2f\n", num1, num2, resultado);
        return resultado;
    } else {
        printf("Error: No se puede dividir por cero.\n");
        return 0.0;
    }
}
int parImpar (int num){
    return num %2==0;
}

// Función que cuenta cuántos dígitos tiene un número
int contarDigitos(int num) {
    int contador = 0;
    while (num != 0) {
        num = num / 10;  // Elimina el último dígito
        contador++;      // Aumenta el contador
    }

    return contador;
}

