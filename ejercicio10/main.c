#include <stdio.h>
#include <stdlib.h>

// Función para contar la frecuencia de los elementos de un arreglo
void contarFrecuencia(int arreglo[], int tamano) {
    int i, j, contador;
    for (i = 0; i < tamano; i++) {
        contador = 1;
        for (j = i + 1; j < tamano; j++) {
            if (arreglo[i] == arreglo[j]) {
                contador++;
            }
        }
        printf("%d se repite %d veces\n", arreglo[i], contador);
    }
}

int main(int argc, char *argv[]) {
    int arreglo[] = {1, 2, 6, 4, 7, 10, 11, 6, 6, 2};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    contarFrecuencia(arreglo, tamano);

    return 0;
}
