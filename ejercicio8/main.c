#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Comparacion de arreglos y contador de elementos iguales

int comparar(){
	int i,j;
	int a[] = {6,7,8,9,10,55,53,30,33,14};
	int b[] = {1,2,7,6,3,55,26,30,12,14};
	int resultado = 0;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(a[i] == b[j]){
				resultado++;
			}
		}
	}
	printf("Hay %d elementos iguales", resultado);
}

int main(int argc, char *argv[]) {
	comparar();
	return 0;
}
