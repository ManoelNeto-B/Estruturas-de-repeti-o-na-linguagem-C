/*1. Faça um programa que exibe, em ordem decrescente, os 500 primeiros números
inteiros positivos.*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int cont = 500;

    printf("a seguir a ordem decresscente de 500 ate 0 : \n");

    while (cont >= 1)
    {

        printf("%i\n\n", cont);

        cont--;
    }

    return (0);
}