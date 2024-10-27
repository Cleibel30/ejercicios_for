#include <stdio.h>
#include <stdlib.h>

// Función para multiplicar matrices 2x2
int multiplicarMatrices(int matriz1[2][2], int matriz2[2][2], int resultado[2][2]) {
    resultado[0][0] = matriz1[0][0] * matriz2[0][0] + matriz1[0][1] * matriz2[1][0];
    resultado[0][1] = matriz1[0][0] * matriz2[0][1] + matriz1[0][1] * matriz2[1][1];
    resultado[1][0] = matriz1[1][0] * matriz2[0][0] + matriz1[1][1] * matriz2[1][0];
    resultado[1][1] = matriz1[1][0] * matriz2[0][1] + matriz1[1][1] * matriz2[1][1];
}

int main(int argc, char *argv[]) {
    int matriz1[2][2] = { {8, 5}, {13, 4} };
    int matriz2[2][2] = { {2, 5}, {7, 11} };
    int resultado[2][2];
    int i, j;

    // Llamada a la función
    multiplicarMatrices(matriz1, matriz2, resultado);

    // Imprimir el resultado
    printf("El resultado de la multiplicación de las matrices es:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
