#include <stdio.h>
#include <stdlib.h>

int VetorMultiplosNumero(int *vetor, int n, int valor, int *multiplos);
int AlocaVetor(int n, int **vetor);

int main()
{
    int i, valor, n;
    scanf("%d", &n);
    int multiplos[n], *vetor;
    AlocaVetor(n, &vetor);

    for (i = 0; i < n; i++){
        printf("Digite o valor do vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor: ");
    scanf("%d", &valor);

    int quantidade = VetorMultiplosNumero(vetor, n, valor, multiplos);
    printf("%d", quantidade);

    for (i = 0; i < quantidade; i++)
        printf("\n%d", multiplos[i]);
        
    free(vetor);
}

int AlocaVetor(int n, int **vetor)
{

    *vetor = (int *)malloc(sizeof(int) * n);
}

int VetorMultiplosNumero(int *vetor, int n, int valor, int *multiplos)
{
    int i, quantidade = 0, j = 0;

    for (i = 0; i < n; i++)
        if ((vetor[i] % valor) == 0)
        {
            quantidade++;
            multiplos[j] = vetor[i];
            j++;
        }

    return quantidade;
}
