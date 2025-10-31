#include <stdio.h>

void moverTorreRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

int main() {
    printf("TORRE COM RECURSIVIDADE:\n");
    moverTorreRecursivo(5);
    printf("\n");
    
    printf("BISPO COM RECURSIVIDADE:\n");
    moverBispoRecursivo(5);
    printf("\n");
    
    printf("RAINHA COM RECURSIVIDADE:\n");
    moverRainhaRecursivo(8);
    printf("\n");
    
    printf("CAVALO COM LOOPS COMPLEXOS:\n");
    int movimentosCima = 2;
    int movimentosDireita = 1;
    
    for (int vertical = 1, horizontal = 0; vertical <= movimentosCima || horizontal < movimentosDireita; vertical++) {
        if (vertical <= movimentosCima) {
            printf("Cima\n");
        }
        
        if (vertical == movimentosCima && horizontal < movimentosDireita) {
            printf("Direita\n");
            horizontal++;
            if (horizontal >= movimentosDireita) {
                break;
            }
        }
        
        if (vertical < movimentosCima) {
            continue;
        }
    }
    printf("\n");
    
    printf("BISPO COM LOOPS ANINHADOS:\n");
    int casasDiagonais = 5;
    
    for (int movimentoVertical = 0; movimentoVertical < casasDiagonais; movimentoVertical++) {
        for (int movimentoHorizontal = 0; movimentoHorizontal < 1; movimentoHorizontal++) {
            printf("Cima, Direita\n");
        }
    }
    
    return 0;
}