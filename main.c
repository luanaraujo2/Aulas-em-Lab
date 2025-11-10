#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tamanho 100

void cubo1(float L, float *area, float *volume);

void cubo1(float L, float *area, float *volume){
    *area = 6 * pow(L, 2);
    *volume = pow(L, 3);
}

int main()
{
    int i = 0;
    float L, area, volume;
    while(i < tamanho){
        printf("Dados do Cubo %i:\n", i + 1);
        printf("Valor do Lado(L > 0): "); scanf("%f", &L);
        if (L <= 0){
            printf("ERRO: Lado invalido. Tente novamente.\n");
        }
        else{
            printf("Dados de saida: ");
            cubo1(L, &area, &volume);
            printf("Area: %.1f metros quadrados.\n", area);
            printf("Volume: %.1f metros cubicos.\n", volume);
        }
        i++;
    }

    return 0;
}
