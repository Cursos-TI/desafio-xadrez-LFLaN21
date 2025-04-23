#include <stdio.h>

int main() {

    int bispo = 1, torre = 1, rainha = 1, cavalo = 1;

//Movimentação do Bispo. 

    printf("***MOVIMENTO DO BISPO***\n");

//Andando 5 casas para diagonal.

    for (bispo = 0; bispo <= 4; bispo++) {
        printf("*Cima*, *Direita*\n");
    }

//Movimento da Torre.

    printf("***MOVIMENTO DA TORRE***\n");

//Andando 5 casas para direita.

    while (torre <= 5)
    {
    printf("*Direta*\n");
    torre++;
    }

//Movimento da Rainha.

    printf("***MOVIMENTO DA RAINHA***\n");

//Andando 8 casas para esquerda.

    do
    {
     printf("*Esquerda*\n");
     rainha++;  
    } while (rainha <= 8);
    
//Movimentação do Cavalo.

    printf("***MORIVEMENTAÇÂO DO CAVALO***\n");

//Andando 2 casas para baixo e 1 à esquerda.

    for (cavalo = 0; cavalo <=1; cavalo++) 
    {
        printf("*Baixo*\n");
    }
    if (cavalo = 2) {
        printf("*Esquerda*\n");
    }        
   

    return 0;
}
