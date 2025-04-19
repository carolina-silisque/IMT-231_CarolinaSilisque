//4. Acumulador de valores positivos

#include <stdio.h>


int main(void){

    int num;
    int suma_acumulada =0;
    
    while(1){
        printf("ingrese un numero entero positivo: \n");
        scanf("%d", &num);
        if (num<0){
            printf("la suma TOTAL acumulada es: %d\n", suma_acumulada);
            printf("fin del programa \n");
            break;
           
        }else if(num>0){
            suma_acumulada += num;
            printf("la suma acumulada es: %d\n", suma_acumulada);   
        }

    }
    return 0;
}