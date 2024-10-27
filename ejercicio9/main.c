#include <stdio.h>
#include <stdlib.h>

// Función para sumar matrices 3x3
void sumarMatrices(int matriz_uno[3][3], int matriz_dos[3][3], int resultado[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            resultado[i][j] = matriz_uno[i][j] + matriz_dos[i][j];
        }
    }
}

int main(int argc, char *argv[]) {
    int matriz_uno[3][3] = {{4, -6, 3}, {6, 2, 5}, {-2, 5, 7}};
    int matriz_dos[3][3] = {{3, 5, -4}, {7, 4, 2}, {-4, -4, 3}};
    int resultado[3][3];

    // Llamada a la función
    sumarMatrices(matriz_uno, matriz_dos, resultado);

    // Imprimir el resultado
    printf("La suma de las dos matrices 3x3 es:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
