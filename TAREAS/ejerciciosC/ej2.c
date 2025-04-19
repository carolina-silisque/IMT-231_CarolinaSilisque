//2. contador de digitos 

#include <stdio.h>
#include "funciones.h"

int main(void){
    int n;

    while(1){

        if (n == 0){
            printf("fin del programa :)");
            break;
            
        }
    
        printf("ingrese un nnumero: ");
        scanf( "%d" , &n);

        int ndigitos = contarDigitos(n);
        printf("el numero %d tiene %d digitos\n", n, ndigitos);
        
        
    }

    return 0;
}