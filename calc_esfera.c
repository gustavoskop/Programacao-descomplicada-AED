#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

void calc_esfera(float R, float *area, float *volume);

int main()
{
    float a, v, raio;

    printf("digite o raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &a, &v);

    printf("%f, %f", a, v);
}

void calc_esfera(float R, float *area, float *volume)
{

    *area = 4 * M_PI * pow(R, 2);
    *volume = (4 * M_PI * pow(R, 3)) / 3;
}