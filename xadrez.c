#include <stdio.h>

int main() {

    int bispo = 1, torre = 1, rainha = 1;

//Movimentação do bispo. 

    printf("***MOVIMENTO DO BISPO***\n");

//Andando 5 casas para diagonal.

    for (bispo = 0; bispo <= 5; bispo++) {
        printf("*Cima*, *Direita*\n");
    }

//Movimento da torre.

    printf("***MOVIMENTO DA TORRE***\n");

//Andando 5 casas para direita.

    while (torre <= 5)
    {
    printf("*Direta*\n");
    torre++;
    }

//Movimento da rainha.
    printf("***MOVIMENTO DA RAINHA***\n");
//Andando 8 casas para esquerda.

    do
    {
     printf("*Esquerda*\n");
     rainha++;  
    } while (rainha <= 8);
    
   

    return 0;
}
