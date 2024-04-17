/*2. Escreva um programa que exibe o somatório dos valores pares existentes na faixa
de 1 (inclusive) até 500 (inclusive).*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, s = 0;

    for (i = 1; i <= 500; i++)
    {

        if (i % 2 == 0)
        {

            s = s + i;
        }
    }

    printf("o somatório dos números de 1 ate 500 é: %i\n\n", s);

    return (0);
}