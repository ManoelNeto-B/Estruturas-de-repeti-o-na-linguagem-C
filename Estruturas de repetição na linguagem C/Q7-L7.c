/*7. Escreva um programa que calcula e exibe o fatorial dos números ímpares existentes
no intervalo entre 1 (inclusive) e 11 (inclusive). */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n = 1, cont = 1, x;

    printf("\t\teste programa será utilizado para para descobrir o fatorial de um número, para isso informe o que for pedidio abaixo\n\n");

    printf("digite o número para descobrir seu fatorial: \n");

    while (n <= 11)
    {
        x = 1;
        n = n + 2;

        while (cont <= n)
        {
            x = x * cont;

            cont++;
        }

        printf("%i! = %i\n", n, x);
    }

    return (0);
}