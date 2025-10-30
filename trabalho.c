#include <stdio.h>

int main() {
    //
    // movimento do cavalo no xadrez 
    // Nível aventureiro - loops aninhados
    // O Cavalo se move duas casas para baixo e uma para a esquerda
    // 

    int movimentosBaixo = 2; // quantidade de casas para baixo
    int movimentosEsquerda = 1; // quantidade de casas para esquerda

    printf("=== Movimento do Cavalo ===\n\n");

    // Loop externo (for): controla o movimento para baixo
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n"); // imprime o movimento vertical

        // Loop interno (while): controla o movimento para a esquerda (executa uma vez)
        int j = 0;
        while (j < movimentosEsquerda && i == movimentosBaixo) {
            // só mova para a esquerda depois de descer duas casas
            printf("Esquerda\n");
            j++;
        }
    }

    printf("\nMovimento concluído!\n");

    return 0;
}