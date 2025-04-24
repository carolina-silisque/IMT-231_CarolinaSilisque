// Simulación de semáforo
#include <stdio.h>

typedef enum { ROJO, VERDE, AMARILLO } semaforo; 

int main(void) {
    semaforo estado = ROJO; 
    int ciclos = 10; 

    for (int i = 0; i < ciclos; i++) {
        if (estado == ROJO) {
            printf("El semáforo se encuentra en ROJO 'PARE'\n");
            estado = VERDE; 
            
        } else if (estado == VERDE) {
            printf("El semáforo se encuentra en VERDE 'AVANCE'\n");
            estado = AMARILLO; 
            
        } else if (estado == AMARILLO) {
            printf("El semáforo se encuentra en AMARILLO 'PRECAUCIÓN'\n");
            estado = ROJO; 
        }
        
    }

    return 0;
}