#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    float A, B, C;

    printf("Informe o valor do cateto B:");
    scanf("%.2f", &B);
    printf("Informe o valor do cateto C:");
    scanf("%.2f", &C);

    printf("O Valor da hipotenusa A será %.1f", pow(pow(B,2) + pow(B,2)), 1.0/2 );
    return 0;
}
