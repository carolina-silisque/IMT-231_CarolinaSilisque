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
    return num %2 == 0;
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

int comparador(int num1, int num2){
        if (num1 == num2) return 0;
        else if (num1 > num2) return 1;
        else return -1;
    
}
// Función que compara dos números y devuelve 0 si son iguales, 1 si el primero es mayor y -1 si el segundo es mayor`   

int comparar_numeros(int num1, int num2) {
    if (num1 > num2) {
        printf("el primer numero es mayor que el segundo.(%d>%d) \n\n", num1, num2);

    } else if (num1 < num2) {
        printf("el segundo numero es mayor que el primero.(%d>%d)  \n\n", num2, num1);

    } else if (num1 == num2 && num1 !=0 && num2 !=0) {
        printf("Los números son iguales.\n\n");
    }
}

int multiplo3 (int num){
    return num %3 == 0;
}

int factorial(int num){
    int factorial=1;

    for (int i=1; i<=num ;i++){
        factorial = factorial*i;
    }
    printf("el factorial del numero(%d), es %d\n\n", num, factorial);
}

// Implementación de la función para invertir el número
int invertir_numero(int numero) {
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10; 
        invertido = invertido * 10 + digito; 
        numero /= 10; 
    }

    return invertido;
}
int primo(int numero){

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
            printf("el numero ingresado es primo");

        }else{
            return 1;
            printf("el numero ingresado NO es primo");
        }
    }
    

}

int contador(int num){
    int i, contador_par, contador_impar;
                    /*Solicitar un número entero positivo.
Contar cuántos dígitos pares e impares tiene entre 1 y ese numero.
Usar una función contarDigitos()*/
                    for (i=1;i==num; i++){
                        contador_par = 0;
                        contador_impar = 0;
                        
                        if (i%2==0){                                
                            contador_par++;      
                           
                        }else{                               
                            contador_impar++;          
                        }
                                    
            
                    }     
                    printf("existen %d numeros pares entre 1 y el numero (%d). \n", contador_par, num);
                    printf("existen %d numeros impares entre 1 y el numero (%d). \n", contador_impar, num);
                    
}
