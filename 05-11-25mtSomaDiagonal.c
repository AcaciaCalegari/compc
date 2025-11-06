//machineteaching d hj a tarde

int soma_diagonal_secundaria(int m[][10], int n) {
    int soma = 0;
    
    for (int i = 0; i < n; i++) {
        soma += m[i][n - 1 - i];
    }
    
    return soma;
}
