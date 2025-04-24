#include <stdio.h>

int main(void) {
    int filas;

    printf("Introduzca el número de filas: ");
    scanf("%d", &filas);

    printf("Árbol:\n");

    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Salto de línea después de cada fila
    }

    return 0;
}
