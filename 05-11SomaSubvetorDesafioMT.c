//Maior soma possível entre tds subvetores
//ultimo exercico d smn passada da lista 6 d vetores
//2:38am 05-11-2025

int maior_soma_subvetor(int v[], int n) {
    int soma_atual = v[0], maior = v[0];
    for (int i = 1; i < n; i++) {
        if (soma_atual < 0)
            soma_atual = v[i];
        else
            soma_atual += v[i];
        if (soma_atual > maior)
            maior = soma_atual;
    }
    return maior;
}
