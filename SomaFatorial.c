// função que soma os algarismos de um fatorial

#include <stdio.h>

int SomaFatorial(int x);

int main()
{
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("%d", SomaFatorial(x));
}

int SomaFatorial(int x)
{
    int i, alg = 0, fatorial;
    if (x == 1)
        return 1;
    if (x == 0)
        return 0;

    fatorial = 1;

    for (i = 1; i < x; i++)
        fatorial += fatorial * i;

    while (fatorial != 0)
    {
        alg += fatorial % 10;
        fatorial /= 10;
    }

    return alg;
}