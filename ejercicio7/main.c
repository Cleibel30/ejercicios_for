#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Triangulo de estrellas

int estrella (int filas){
    int i, j;
    for (i = 1; i <= filas; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
	int filas, i, j;

    printf("Ingrese el numero de filas del triangulo: ");
    scanf("%d", &filas);

    estrella(filas);

    return 0;
}
