
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k = 0, *numerosAcertados, count = 0;
    int loteria[] = {15, 26, 28, 33, 43, 58}, meusNumeros[] = {15, 16, 17, 28, 50, 58};
    int tamanhoLoteria = 6;
    int acertos[tamanhoLoteria];

    for (i = 0; i < tamanhoLoteria; i++)
        for (j = i; j < tamanhoLoteria; j++)
            if (loteria[i] == meusNumeros[j])
            {
                acertos[k++] = loteria[i];
                count++;
            }

    numerosAcertados = (int *)malloc(sizeof(int) * count);

    for (i = 0; i < count; i++)
        numerosAcertados[i] = acertos[i];

    printf("Numeros sorteados: ");
    for (i = 0; i < tamanhoLoteria; i++)
        printf("%d ", loteria[i]);

    printf("\nNumeros acertados: ");
    for (i = 0; i < count; i++)
        printf("%d ", numerosAcertados[i]);

    free(numerosAcertados);
}