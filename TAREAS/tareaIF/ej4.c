//4. Clasicar la edad

#include <stdio.h>

int main(void){
 int edad =0;
 printf("Ingrese su edad: \n");
 scanf("%d", &edad);
    if ( edad >= 18 ){
        printf("Eres mayor de edad, eres un ADULTO, %d \n", edad);
    } else if (edad < 18 && edad >= 13){
        printf("Eres un ADOLESCENTE,  %d \n", edad);
    } else {
        printf("tu edad corresponde a la INFANCIA %d \n", edad);
    }

}