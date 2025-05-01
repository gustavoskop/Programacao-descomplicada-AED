#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, *v, j;

    printf("escreva o tamanho do vetor: ");
    scanf("%d", &j);

    v = (int *)malloc(sizeof(int) * j);

    for (i = 0; i < j; i++)
        scanf("%d", &v[i]);

    for (i = 0; i < j; i++)
        printf("%d", v[i]);

    free(v);
}