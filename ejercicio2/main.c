#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Numeros pares del 1 al N

int pares (int numero){
	int i;

	printf("Numeros pares del 1 al %d\n", numero);
	
	for(i = 1; i<=numero; i++){
		if(i % 2 == 0){
			printf("%d\n", i);
		}
	}

}

int main(int argc, char *argv[]) {
	int numero, i;
	printf("Ingresa un numero entero: ");
	scanf("%d", &numero);
	pares(numero);
	
	return 0;
}
