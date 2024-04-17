/*6. Faça um programa para calcular o fatorial de n, onde o valor de n deve ser
fornecido pelo usuário. O programa deve exibir uma mensagem seguindo o padrão
ilustrado nas condições a seguir.
• Se o usuário digitar um valor maior ou igual a zero (n >= 0), como, por exemplo,
n = 4, o programa deve exibir na tela a seguinte mensagem: 4! = 24;
• Senão, o programa deve exibir na tela a seguinte mensagem: Não existe fatorial
de número negativo*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, n, f = 1;

    printf("Digite um valor inteiro: ");
    scanf("%i", &n);

    if (n < 0)
    {

        printf("não existe fatorial de número negativo.");
    }

    else
    {
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }

        printf("%i! = %i", n, f);
    }

    return (0);
}