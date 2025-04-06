#include <stdio.h>

int main(void) {
    int numberA = 0;
    int numberB = 0;

    printf("Ingrese el primer numero: \n");
    scanf("%d", &numberA);

    printf("Ingrese el segundo numero: \n");
    scanf("%d", &numberB);
    
    if (numberA == numberB) {
        printf("Los numeros son iguales, %d \n", numberA);
    } else if (numberA > numberB) {
        printf("El numero mayor es %d \n", numberA);
    } else {
        printf("El numero mayor es %d \n", numberB);
        
    }

    return 0;
}