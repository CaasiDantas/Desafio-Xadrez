#include <stdio.h>

#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

void moverBispoRecursivo(int passo) {
    if (passo == 0) return;
    printf("Cima + Direita\n");
    moverBispoRecursivo(passo - 1);
}

void moverTorreRecursiva(int passo) {
    if (passo == 0) return;
    printf("Direita\n");
    moverTorreRecursiva(passo - 1);
}

void moverRainhaRecursiva(int passo) {
    if (passo == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(passo - 1);
}

void moverCavaloL() {
    for (int i = 0; i < 1; i++) {
        int j = 0;
        while (j < 2) {
            if (j == 0) printf("Baixo\n");
            else printf("Esquerda\n");
            j++;
        }
    }
}

void moverCavaloLAvancado() {
    int i = 0, j = 0;

    while (i < 2) {
        if (i == 0 && j == 0) {
            printf("Cima\n");
            j++;
        } else if (i == 1 && j == 1) {
            printf("Direita\n");
            break; 
        }
        i++;
    }
}

int main() {
    printf("===== NÍVEL NOVATO =====\n");
    for (int i = 0; i < PASSOS_BISPO; i++) {
        printf("Cima + Direita\n");
    }
    for (int i = 0; i < PASSOS_TORRE; i++) {
        printf("Direita\n");
    }
    for (int i = 0; i < PASSOS_RAINHA; i++) {
        printf("Esquerda\n");
    }
    printf("\n===== NÍVEL AVENTUREIRO =====\n");
    moverCavaloL();
    printf("\n===== NÍVEL MESTRE =====\n");
    printf("Movimento Recursivo - Bispo:\n");
    moverBispoRecursivo(PASSOS_BISPO);
    printf("Movimento Recursivo - Torre:\n");
    moverTorreRecursiva(PASSOS_TORRE);
    printf("Movimento Recursivo - Rainha:\n");
    moverRainhaRecursiva(PASSOS_RAINHA);
    printf("Movimento Avançado - Cavalo (Cima + Direita):\n");
    moverCavaloLAvancado();
    return 0;
}