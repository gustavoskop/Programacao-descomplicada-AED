#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void AlocarString(char **frase, int tamanho);
void RetirarVogais(char *str);

int main()
{

    int n, i, j = 0;
    char *str, c;

    printf("digite o tamanho da string: ");
    scanf("%d", &n);

    AlocarString(&str, n);

    printf("digite a frase: ");
    scanf(" %[^\n]", str);
    getchar();

    RetirarVogais(str);

    printf("\nstring sem as vogais: %s", str);

    free(str);
}

void AlocarString(char **frase, int tamanho)
{

    *frase = (char *)malloc((tamanho + 1) * sizeof(char));
}

void RetirarVogais(char *str)
{
    int i, j = 0;
    char c;

    for (i = 0; str[i] != '\0'; i++)
    {
        c = tolower(str[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            str[j++] = str[i];
    }

    str[j] = '\0';
}