#include <stdio.h>

int main()
{
    int a;

    printf("Digite um número qualquer: ");
    scanf("%d", &a);

    if(a % 2 == 0)
        printf("O número é PAR.");
    else
        printf("O número é ÍMPAR.");

    return 0;
}