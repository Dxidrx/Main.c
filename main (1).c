#include <stdio.h>

// Função para calcular a média das notas
float calcularMedia(float notas[], int quantidade) {
    float soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    return soma / quantidade;
}

// Função para encontrar a maior nota
float encontrarMaior(float notas[], int quantidade) {
    float maiornota = notas[0];
    for (int i = 1; i < quantidade; i++) {
        if (notas[i] > maiornota) {
            maiornota = notas[i];
        }
    }
    return maiornota;
}

int main() {
    float notas[10];
    int quantidade = 0;

    printf("Estatisticas de Notas\n");
    printf("Digite ate 10 notas (digite um valor negativo para encerrar):\n");

    // Recebendo as notas do usuário
    for (int i = 0; i < 10; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);

        // Verifica se o usuário digitou um valor negativo para encerrar
        if (notas[i] < 0) {
            break;
        }

        quantidade++;
    }

    // Verifica se pelo menos uma nota foi inserida
    if (quantidade == 0) {
        printf("Nenhuma nota valida foi inserida.\n");
        return 0;
    }

    // Calcula e exibe os resultados
    float media = calcularMedia(notas, quantidade);
    float maiornota = encontrarMaior(notas, quantidade);

    printf("\nResultados:\n");
    printf("Media das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maiornota);

    return 0;
}
