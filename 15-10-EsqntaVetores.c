#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIMENSAO 10
#define MAX_ALUNOS 10
#define MAX_NOTAS 3

// ------------------------------------------------------------------
// ATIVIDADE 1: Função para encontrar o maior valor em um vetor de inteiros
// ------------------------------------------------------------------
int encontrar_maior(int *vetor, int tamanho) {
    if (tamanho <= 0) {
        return -99999; 
    }
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

// ------------------------------------------------------------------
// ATIVIDADE 2: Função para calcular o produto interno de dois vetores float
// ------------------------------------------------------------------
float produto_interno(float *v1, float *v2, int n) {
    float produto = 0.0;
    for (int i = 0; i < n; i++) {
        produto += v1[i] * v2[i];
    }
    return produto;
}

// ------------------------------------------------------------------
// ATIVIDADE 3: Definição da estrutura tAluno e função media
// ------------------------------------------------------------------
typedef struct {
    int mat; // matrícula
    int idade;
    float notas[MAX_NOTAS]; // VETOR de notas
} tAluno;

float media(tAluno a) {
    return (a.notas[0] + a.notas[1] + a.notas[2]) / 3.0; // Corrigido
}

// ------------------------------------------------------------------
// FUNÇÃO PRINCIPAL (main)
// ------------------------------------------------------------------
int main() {
    // --- Teste da Atividade 1 ---
    printf("--- Atividade 1: Maior Valor no Vetor ---\n");
    int vetor_int[] = {10, 50, 20, 40, 30}; // Corrigido
    int tam_int = 5;
    int maior_valor = encontrar_maior(vetor_int, tam_int);
    printf("Vetor: {10, 50, 20, 40, 30}\n");
    printf("O maior valor eh: %d\n\n", maior_valor);

    // --- Teste da Atividade 2 ---
    printf("--- Atividade 2: Produto Interno ---\n");
    int N;
    printf("Dgt a dimensao N dos vetores (max %d): ", MAX_DIMENSAO);
    scanf("%d", &N);

    if (N > 0 && N <= MAX_DIMENSAO) {
        float v1[N], v2[N];
        printf("Dgt os %d elementos do vetor v1 (separados por espaco): ", N);
        for (int i = 0; i < N; i++) {
            scanf("%f", &v1[i]);
        }
        printf("Digite os %d elementos do vetor v2 (separados por espaco): ", N);
        for (int i = 0; i < N; i++) {
            scanf("%f", &v2[i]);
        }

        float resultado_interno = produto_interno(v1, v2, N);
        printf("O produto interno eh: %.1f\n\n", resultado_interno);
    } else {
        printf("Dimensao invalida.\n\n");
    }

    // --- Teste da Atividade 3 ---
    printf("--- Atividade 3: Medias de Alunos ---\n");
    tAluno turma[MAX_ALUNOS] = {
        {101, 20, {7.0, 8.0, 9.0}},
        {102, 21, {5.0, 6.0, 7.0}},
        {103, 22, {8.5, 9.0, 7.5}}
    };
    int num_alunos_turma = 3;
    float medias[MAX_ALUNOS];

    for (int i = 0; i < num_alunos_turma; i++) {
        medias[i] = media(turma[i]);
    }

    printf("Medias calculadas para a turma:\n");
    for (int i = 0; i < num_alunos_turma; i++) {
        printf("Aluno Matr. %d: Media %.2f\n", turma[i].mat, medias[i]);
    }

    return 0;
}
