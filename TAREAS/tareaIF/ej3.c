//3. Evaluar si un año es bisiesto

#include <stdio.h>

int main(void) {
    int anno = 0;
    printf("Ingrese un año para determinar si es o no bisiesto:\n");
    scanf("%d", &anno);

    if ((anno % 4 == 0) && ((anno % 100 != 0) || (anno % 400 == 0))) {
        printf("El año %d es bisiesto.\n", anno);
    } else {
        printf("El año %d no es bisiesto.\n", anno);
    }

    return 0;
}
