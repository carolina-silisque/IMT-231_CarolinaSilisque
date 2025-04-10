
#include "funciones.h"
#include <stdio.h>

#define     MENU    "1. para suma\n2. Para resta\n3. Para multipliccacion\n4. para division"   //Esto e suna macro 
#define     MSJ1    "Ingrese el primer numero\n: "
#define     MSJ2    "Ingrese el segunf numero\n: "

int main(void){
    saludo();
    
    int a=0;
    int b=0;
    int opcion=0;
// for (;;) igual era para un bucle infinitp 
    
    while (1){
        printf (MENU);
        scanf("%d", &opcion );
        if (opcion == 1){
            printf(MSJ1);
            scanf("%d", &a);
            printf(MSJ2);
            scanf("%d", &b);
            int resultado=suma(a,b);
            printf("la suma es : %d\n", resultado);
        }else{
            break;
        }
        if (opcion==2){
            printf(MSJ1);
            scanf("%d", &a);
            printf(MSJ2);
            scanf("%d", &b);
            int resultadoresta=resta(a,b);
            printf("la resta es : %d\n\n", resultadoresta);


        }else if (opcion==3){
            printf(MSJ1);
            scanf("%d", &a);
            printf(MSJ2);
            scanf("%d", &b);
            int resultadoresta=resta(a,b);
            printf("la resta es : %d\n\n", resultadoresta);


        }else{
            break;
        }
        }


    return 0;

}