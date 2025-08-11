#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{
    float R, area, volume, volumeLitros;

    printf("ESFERA: Dados de entrada\n");
    printf("RAIO(R) em metros: ");
    scanf("%f", &R);

    area = 4 * PI * pow(R,2);
    volume = 4.0/3 * PI * pow(R,3);
    volumeLitros = volume * 1000;

    printf("Dados da ESFERA:\n", area);
    printf("Area: %.2f metros quadrados\n", area);
    printf("Volume: %.2f metros cubicos\n", volume);
    printf("Volume: %.2f litros", volumeLitros);


    return 0;
}
