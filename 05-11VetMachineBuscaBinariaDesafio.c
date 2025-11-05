//Busca binária verifica se o valor está presente no vetor v d tamanho n

//desafio 1 da lista 6 do mt d smn passada

int busca_binaria(int v[], int n, int valor) {
    int inicio = 0, fim = n - 1, meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (v[meio] == valor)
            return 1;
        if (v[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return 0;
}
