#include <stdio.h>

int main(void) {
    int N;
    printf("Ingrese un número entero N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    printf("\n"); 
    return 0;
}
