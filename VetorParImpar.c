#include <stdio.h>

void ParImpar(int x[30], int par[15], int impar[15]);

int main()
{
    int i, x[30], par[15], impar[15];

    for (i = 0; i < 30; i++)
        x[i] = i;

    ParImpar(x, par, impar);

    for (i = 0; i < 15; i++)
        printf("%d, ", par[i]);

    printf("\n\n");

    for (i = 0; i < 15; i++)
        printf("%d, ", impar[i]);
}

void ParImpar(int x[30], int par[15], int impar[15])
{
    int i, j = 0, p = 0;

    for (i = 0; i < 30; i++)
    {
        if ((x[i] % 2) == 0)
        {
            par[p] = x[i];
            p++;
        }
        else
        {
            impar[j] = x[i];
            j++;
        }
    }
}