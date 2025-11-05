//exercicio 3 da aula 6 do mt d smn passada
//verifica se o vetor v d tamanho n estah em ordem crescente

//2:22am 05/11/2025 ¬¬'

int vetor_ordenado(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (v[i] >= v[i + 1]) {
            return 0;
        }
    }
    return 1;
}

/* isso nao precisa no machine teaching:
int main() {
    int v[] = {1, 2, 3, 4};
    int r = vetor_ordenado(v, 4);
    return r;
}
*/
