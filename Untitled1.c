#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{
    float preco, reajuste;
    float totalBruto, totalLiquido, desconto;
    int quantidade;

    printf("MERCADORIA: Dados de entrada\n");
    printf("Preco(R$): "); scanf("%f", &preco);
    printf("Quantidade(unid): "); scanf("%i", &quantidade);
    printf("Reajuste(%%): "); scanf("%f", &reajuste);

    totalBruto = preco * quantidade;
    desconto = reajuste / 100 * totalBruto;
    totalLiquido = totalBruto - desconto;


    printf("Total a pagar sem desconto: %.2f\n", totalBruto);
    printf("Total a pagar com desconto: %.2f\n", totalLiquido);


    return 0;
}

