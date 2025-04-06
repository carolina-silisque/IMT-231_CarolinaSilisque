#include <stdio.h>

int main(void){

    int num = 0;
    printf("ingrese un numero : \n");
    scanf ("%d", &num);
    if(num % 2 ==0){
        printf("el numero es %d, es PAR \n", num);
    } else {
        printf("el numero %d es IMPAR \n", num);
    }
    return 0 ;
}