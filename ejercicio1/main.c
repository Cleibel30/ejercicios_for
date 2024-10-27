#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Suma de los primeros N numeros enteros

int suma(numero)
{

	int i, suma = 0;
	for (i = 1; i <= numero; i++)
	{
		suma += i;
	}

	printf("La suma de los primeros numeros de %d es: %d", numero, suma);
}

int main(int argc, char *argv[])
{
	int numero;
	printf("Ingresa un numero entero: ");
	scanf("%d", &numero);

	suma(numero);

	return 0;
}
