#include <stdio.h>

void moverBispo(int casas) {
//Recursividade para mover o bispo.
    if(casas > 0) {
        printf("*Direita*, *Cima*\n");
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas) {
//Recursividade para mover o torre.
    if(casas > 0) {
        printf("*Direita*\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
//Recursividade para mover a rainha.
    if(casas > 0) {
        printf("*Esquerda*\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo(int casas) {
//Recursividade para mover o cavalo.
    if(casas > 0) {
        printf("*Baixo*\n");
        moverCavalo(casas - 1);
    } else {
        printf("*Esquerda*\n");
    }
}



int main() {

    printf("***MOVIMENTO DO BISPO***\n");
//Andando 5 casas para diagonal.
    moverBispo(5);

    printf("***MOVIMENTO DA TORRE***\n");
//Andando 5 casas para direita.
    moverTorre(5);

    printf("***MOVIMENTO DA RAINHA***\n");
//Andando 8 casas para esquerda.
    moverRainha(8);

    printf("***MORIVEMENTAÇÂO DO CAVALO***\n");

//Andando em L 2 casas para baixo e 1 à esquerda.
    moverCavalo(2);

    return 0;
}
