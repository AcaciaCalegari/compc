#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 10
#define MAX_NOTAS 3

// --- Definição da estrutura e função média (Atividade 2) ---
typedef struct {
    int mat; // matrícula
    int idade;
    float notas[MAX_NOTAS]; // VETOR de notas
} tAluno;

float media(tAluno a) {
    float soma = 0.0;
    for (int i = 0; i < MAX_NOTAS; i++) {
        soma += a.notas[i];
    }
    return soma / MAX_NOTAS;
}

// --- Atividade 1: Função para contar menores ---
int contar_menores(float *vetor, int tamanho, float n) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < n) {
            contador++;
        }
    }
    return contador;
}

// --- Atividade 2 (item 5): Função para encontrar o índice da maior média ---
int indice_maior_media(float *medias, int tamanho) {
    if (tamanho <= 0) {
        return -1; // Retorna -1 para indicar erro ou vetor vazio
    }

    int indice_maior = 0;
    for (int i = 1; i < tamanho; i++) {
        if (medias[i] > medias[indice_maior]) {
            indice_maior = i;
        }
    }
    return indice_maior;
}

// --- Atividade 2 (item 6): Função para calcular a média da turma ---
float media_da_turma(float *medias, int tamanho) {
    if (tamanho <= 0) {
        return 0.0;
    }

    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += medias[i];
    }
    return soma / tamanho;
}

// --- Atividade 2 (item 7): Função para ler os alunos ---
int ler_turma(tAluno turma[], int tamanho_max) {
    int num_alunos = 0;
    char continuar = 's';

    while (num_alunos < tamanho_max && (continuar == 's' || continuar == 'S')) {
        printf("Preenchendo dados do aluno %d:\n", num_alunos + 1);
        printf("Matricula: ");
        scanf("%d", &turma[num_alunos].mat);
        printf("Idade: ");
        scanf("%d", &turma[num_alunos].idade);
        printf("Notas (3 notas): ");
        for (int i = 0; i < MAX_NOTAS; i++) {
            scanf("%f", &turma[num_alunos].notas[i]);
        }

        num_alunos++;

        if (num_alunos < tamanho_max) {
            printf("Deseja continuar? (s/n): ");
            scanf(" %c", &continuar); // Espaço antes de %c para consumir o \n
        }
    }
    return num_alunos;
}

// --- Atividade 3: Campo Minado ---
void campo_minado(int *tabuleiro, int tamanho) {
    int minas_vizinhas;
    for (int i = 0; i < tamanho; i++) {
        minas_vizinhas = 0;
        // Verifica a célula da esquerda
        if (i > 0) {
            minas_vizinhas += tabuleiro[i-1];
        }
        // Verifica a própria célula
        minas_vizinhas += tabuleiro[i];
        // Verifica a célula da direita
        if (i < tamanho - 1) {
            minas_vizinhas += tabuleiro[i+1];
        }
        printf("%d ", minas_vizinhas);
    }
    printf("\n");
}


// --- Função principal (main) ---
int main() {
    // --- Atividade 2: Dados da Turma ---
    tAluno turma[MAX_ALUNOS];
    int num_alunos;
    float medias[MAX_ALUNOS];
    
    printf("--- Atividade 2: Dados da Turma ---\n");
    num_alunos = ler_turma(turma, MAX_ALUNOS);

    if (num_alunos > 0) {
        for (int i = 0; i < num_alunos; i++) {
            medias[i] = media(turma[i]);
        }

        float media_geral = media_da_turma(medias, num_alunos);
        int indice_maior = indice_maior_media(medias, num_alunos);
        int alunos_abaixo_media = contar_menores(medias, num_alunos, media_geral);

        printf("\n--- Resultados ---\n");
        printf("Media da turma: %.2f\n", media_geral);
        if (indice_maior != -1) {
            printf("Aluno com maior media: Matr. %d (%.2f)\n", turma[indice_maior].mat, medias[indice_maior]);
        }
        printf("Alunos com media abaixo da media da turma: %d\n", alunos_abaixo_media);
    } else {
        printf("Nenhum aluno inserido.\n");
    }

    // --- Atividade 3: Campo Minado ---
    printf("\n--- Atividade 3: Campo Minado ---\n");
    int tamanho_tabuleiro;
    printf("Digite o tamanho do tabuleiro: ");
    scanf("%d", &tamanho_tabuleiro);

    int tabuleiro[tamanho_tabuleiro];
    printf("Digite o tabuleiro (0 ou 1): ");
    for (int i = 0; i < tamanho_tabuleiro; i++) {
        scanf("%d", &tabuleiro[i]);
    }
    printf("Saida: ");
    campo_minado(tabuleiro, tamanho_tabuleiro);

    return 0;
}
