/**/

#include <stdio.h>
#include "funciones.h"

int main(void){
    int opcion ;
    int num;
    
    while (1){
        printf("\n              MENÚ             \n\n");
        printf("Seleccione una opción\n");
        printf("1. Verificar si un número es primo \n");
        printf("2. Calcular el factorial de un número \n");
        printf("3. Contar números pares e impares entre 1 y N \n");
        printf("4. Mostrar múltiplos de 3 entre 1 y N.\n");
        printf("5. Salir del programa.\n");
        
    
        scanf("%d", &opcion);
        if (opcion > 5){
            printf("Opcion invalida selecciones un numero entre 1 y 5 \n");
        }
        if (opcion >= 1 && opcion <= 5) {
            
            switch (opcion){

                case 1:
                    
                    printf("Ingrese un numero para verificar si es primo \n");
                    scanf("%d", &num);
                    primo(num);
                    break;
    
                case 2:
                    printf("Ingrese un numero para calcular su factorial \n");
                    scanf("%d", &num);
                    factorial( num);                
                    break;
    
                case 3:
                    printf("Ingrese un numero positivo \n");
                    scanf("%d", &num);
                    contador( num);

                case 4:
                    
                    break;

                case 5:
                    printf("¡Hasta luego!\n");
                    break;

                default:
                    printf("opcion invalida");
                    break;
            } 
            
        }
        if (opcion ==5){
            break;
        }
        
    }
            


    return 0;
}