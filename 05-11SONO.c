//exercicios p fzr na sala - qua 05-11-25 03:56am
//varios cdgs p estudar e ver qual da p aproveitar

//primeiro cdg sem printf e sem intmain

#define MAX 10

void lerMatriz(int m[MAX][MAX], int lin, int col) {
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &m[i][j]);
}

void imprimirMatriz(int m[MAX][MAX], int lin, int col) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int somarMatriz(int m[MAX][MAX], int lin, int col) {
    int soma = 0;
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            soma += m[i][j];
    return soma;
}

void multiplicarMatrizes(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}




//Aki embaixo eh com printf e com intmain


#include <stdio.h>
#define MAX 10

void lerMatriz(int m[MAX][MAX], int lin, int col) {
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &m[i][j]);
}

void imprimirMatriz(int m[MAX][MAX], int lin, int col) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int somarMatriz(int m[MAX][MAX], int lin, int col) {
    int soma = 0;
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            soma += m[i][j];
    return soma;
}

void multiplicarMatrizes(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main() {
    int n;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    printf("Digite a dimensao da matriz (1 a 10): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz A:\n");
    lerMatriz(A, n, n);

    printf("Digite os elementos da matriz B:\n");
    lerMatriz(B, n, n);

    printf("\nMatriz A:\n");
    imprimirMatriz(A, n, n);

    printf("\nMatriz B:\n");
    imprimirMatriz(B, n, n);

    multiplicarMatrizes(A, B, C, n);

    printf("\nSoma dos elementos de A: %d\n", somarMatriz(A, n, n));
    printf("Soma dos elementos de B: %d\n", somarMatriz(B, n, n));

    printf("\nMatriz C = A x B:\n");
    imprimirMatriz(C, n, n);

    return 0;
}



//Aki embaixo outro




#include <stdio.h>

void lerMatriz(int m[][10], int lin, int col) {
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &m[i][j]);
}

void imprimirMatriz(int m[][10], int lin, int col) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int somarMatriz(int m[][10], int lin, int col) {
    int soma = 0;
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            soma += m[i][j];
    return soma;
}

void multiplicarMatrizes(int A[][10], int B[][10], int C[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main() {
    int n;
    printf("Digite a dimensao da matriz (1 a 10): ");
    scanf("%d", &n);

    int A[n][10], B[n][10], C[n][10];

    printf("Digite os elementos da matriz A:\n");
    lerMatriz(A, n, n);

    printf("Digite os elementos da matriz B:\n");
    lerMatriz(B, n, n);

    multiplicarMatrizes(A, B, C, n);

    printf("\nMatriz A:\n");
    imprimirMatriz(A, n, n);

    printf("\nMatriz B:\n");
    imprimirMatriz(B, n, n);

    printf("\nSoma de A: %d\n", somarMatriz(A, n, n));
    printf("Soma de B: %d\n", somarMatriz(B, n, n));

    printf("\nMatriz C = A x B:\n");
    imprimirMatriz(C, n, n);

    return 0;
}



//Aki embaixo outro

#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n];

    printf("Digite os elementos da matriz A:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &A[i][j]);

    printf("Digite os elementos da matriz B:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &B[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) {
            C[i][j] = 0;
            for(int k=0;k<n;k++)
                C[i][j] += A[i][k]*B[k][j];
        }

    printf("Resultado (A x B):\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}



