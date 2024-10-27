#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Contar los digitos de un numero

int digito(int numero)
{

    int contador = 0;

    if (numero == 0)
    {
        contador = 1;
    }
    else
    {
        for (numero; numero != 0; numero /= 10)
        {
            contador++;
        }
    }

    printf("El numero tiene %d digitos\n", contador);
}

int main(int argc, char *argv[])
{
    int numero;

    printf("Ingresa un numero: ");
    scanf("%d", &numero);
    digito(numero);

    return 0;
}
