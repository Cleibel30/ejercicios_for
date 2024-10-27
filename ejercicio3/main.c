#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Factorial de un numero

int factorial(int numero){
	int factorial = 1, i;

	for(i = 1; i<=numero; i++){
		factorial *= i;
	}
	
	printf("El factorial de %d es: %d", numero, factorial);

}

int main(int argc, char *argv[]) {
	int numero;
	printf("Ingresa un numero entero: ");
	scanf("%d", &numero);
	factorial(numero);
	
	return 0;
}
