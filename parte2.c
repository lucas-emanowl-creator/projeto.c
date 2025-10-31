#include <stdio.h>

int main() {
    printf("=== SIMULADOR DE XADREZ - NÍVEL AVENTUREIRO ===\n\n");
    
    // =============================================
    // NÍVEL NOVATO: Movimentos básicos (mantidos do nível anterior)
    // =============================================
    printf("--- MOVIMENTOS BÁSICOS ---\n\n");
    
    // Torre: 5 casas para direita (usando FOR)
    printf("TORRE - 5 casas para direita:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // Bispo: 5 casas diagonal (usando WHILE)
    printf("BISPO - 5 casas diagonal cima/direita:\n");
    int contadorBispo = 0;
    while (contadorBispo < 5) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");
    
    // Rainha: 8 casas para esquerda (usando DO-WHILE)
    printf("RAINHA - 8 casas para esquerda:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < 8);
    
    printf("\n");
    
    // =============================================
    // NÍVEL AVENTUREIRO: Cavalo com loops aninhados
    // =============================================
    printf("--- MOVIMENTO DO CAVALO (LOOPS ANINHADOS) ---\n\n");
    
    // Definindo variáveis para o movimento do Cavalo
    int movimentosVerticais = 2;    // Duas casas para baixo
    int movimentosHorizontais = 1;  // Uma casa para esquerda
    
    printf("CAVALO - Movimento em L:\n");
    printf("(%d casas para BAIXO + %d casa para ESQUERDA)\n\n", 
           movimentosVerticais, movimentosHorizontais);
    
    // LOOP ANINHADO: FOR externo + WHILE interno
    // Loop FOR para controlar o movimento vertical (obrigatório)
    for (int movimentoVertical = 1; movimentoVertical <= movimentosVerticais; movimentoVertical++) {
        
        // Imprime movimento para baixo a cada iteração
        printf("Baixo\n");
        
        // Loop WHILE para controlar o movimento horizontal
        // Só executa quando chegamos na última iteração vertical
        int movimentoHorizontal = 0;
        while (movimentoHorizontal < movimentosHorizontais && 
               movimentoVertical == movimentosVerticais) {
            
            // Imprime movimento para esquerda
            printf("Esquerda\n");
            
            // Incrementa o contador horizontal para evitar loop infinito
            movimentoHorizontal++;
        }
    }
    
    printf("\nMovimento do Cavalo concluído!\n");
    printf("=== FIM DA SIMULAÇÃO ===\n");
    
    return 0;
}