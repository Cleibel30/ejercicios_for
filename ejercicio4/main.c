#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Tabla de multiplicar de un numero

int multiplicar(int numero)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
}

int main(int argc, char *argv[])
{
	int numero;
	printf("Ingresa un numero entero: ");
	scanf("%d", &numero);

	multiplicar(numero);

	return 0;
}
