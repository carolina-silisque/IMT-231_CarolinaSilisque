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
float multiplicacion(float numero1, float numero2){
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




// 7. Función para generar la secuencia de Fibonacci
int fibonacci(int n) {
    int a = 0, b = 1, siguiente;
    printf("Secuencia de Fibonacci hasta %d: ", n);
    while (a <= n) {
        printf("%d ", a);
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    printf("\n");
}

// 8. Función para calcular la potencia de un número
double potencia(double base, int exponente) {
    double resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

// 9. Función para contar las vocales en una cadena
int contarVocales(const char *cadena) {
    int contador = 0;
    for (int i = 0; i < strlen(cadena); i++) {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    return contador;
}

// 10. Función para invertir una cadena de texto
void invertirCadena(char *cadena) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud / 2; i++) {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }
}

