#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000

void contadorLetras(char texto[TAMANHO], int *Q1, int *Q2);

void contadorLetras(char texto[TAMANHO], int *Q1, int *Q2){
    int i = 0;
    *Q1 = 0;
    *Q2 = 0;
    while(texto[i] != '\0'){
        if(texto[i] >= 'a' && texto[i] <= 'z'){
            *Q1 = (*Q1) + 1;
        }
        else if(texto[i] >= 'A' && texto[i] <= 'Z'){
            *Q2 = (*Q2) + 1;
        }
        i++;
    }
}

int main()
{
    char texto[TAMANHO];
    int Q1, Q2;
    do{
        printf("Digite um texto qualquer: "); scanf("\n%[^\n]", texto);
        if (strcmp(texto, "SAIR") == 0 ||
            strcmp(texto, "sair") == 0){
            printf("Fim do programa.\n");
        }
        else{
            // REUSABILIDADE
            contadorLetras(texto, &Q1, &Q2);
            printf("Texto: %s \n", texto);
            printf("Quantidade de Letras Maiusculas: %i\n", Q1);
            printf("Quantidade de Letras Minusculas: %i\n\n", Q2);
        }
    }while(strcmp(texto, "SAIR") != 0 &&
            strcmp(texto, "sair") != 0);


    return 0;
}
