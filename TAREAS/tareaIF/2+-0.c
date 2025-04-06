#include <stdio.h>


int main(void) {
    int num = 0;
    printf("Ingrese un numero entero: \n");
    scanf("%d", &num);
    if (num>0){
        printf("El numero ingresado es POSITIVO, %d \n", num);
    } else if (num<0){
        printf("El numero ingresado es NEGATIVO, %d \n", num);
    } else {
        printf("El numero ingresado es CERO, %d \n", num); 
    }
    
    return 0;

}