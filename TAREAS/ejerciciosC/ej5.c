// Ejercicio 5: Mini menú con switch

#include <stdio.h>
#include "funciones.h"

int main(void){
    int opcion ;
    int n1, n2;
    
    while (1){
        printf("\n        MENÚ       \n");
        printf("Seleccione una opción: \n");
        printf("1. Sumar dos números\n");
        printf("2. Restar dos números\n");
        printf("3. Multiplicar dos números\n");
        printf("4. Salir\n");
    
        scanf("%d", &opcion);
        if (opcion>4){
            printf("Opcion in0valida selecciones un numero entre 1 y 4 \n");
        }

        if (opcion >= 1 && opcion <= 4) {
            


            switch (opcion){

                case 1:
                    printf("Ingrese el primer número: ");
                    scanf("%d", &n1);
                    printf("Ingrese el segundo número: ");
                    scanf("%d", &n2);
                    printf("Resultado de la SUMA: %d\n",suma( n1, n2));
                    
                    break;
    
                case 2:
                    printf("Ingrese el primer número: ");
                    scanf("%d", &n1);
                    printf("Ingrese el segundo número: ");
                    scanf("%d", &n2);
                    printf("Resultado de la RESTA: %d\n",resta( n1, n2));              
                    break;
    
                case 3:
                    printf("Ingrese el primer número: ");
                    scanf("%d", &n1);
                    printf("Ingrese el segundo número: ");
                    scanf("%d", &n2);
                    printf("Resultado de la MULTIPLICACION: %d\n", multiplicacion(n1,n2));
                    break;
                case 4:
                    printf("¡Hasta luego!\n");
                    break;

                default:
                    printf("opcion invalida");
                    break;
            } 
            break; 
        }
    }
    return 0;
}