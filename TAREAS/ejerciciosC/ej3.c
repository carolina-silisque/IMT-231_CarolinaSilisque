// Simulación de semáforo
#include <stdio.h>


int main(void){
    typedef enum {rojo, verde, amarillo } semaforo;

    semaforo estado = rojo;
    int ciclos = 0;

    while (ciclos < 10){

        if(estado == rojo){
            printf("El semaforo se encuentra en Rojo 'PARE' \n");
            estado = verde;

        } else if(estado == verde){
            printf("El semaforo se encuentra en verde 'AVANZE' \n");
            estado = amarillo;

        } else if(estado == amarillo){
            printf("El semaforo se encuentra en Amarillo 'PRECAUCION' \n");
            estado = rojo;    
        }
        ciclos ++;
    }
    return 0;
}