//Pratik d prog: manipulação d string (Lista pdf d string)
//09/09/2025
//acaciacalegari

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função auxiliar: verifica se string só tem dígitos
int so_digitos(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) { //isdigit eh uma função da biblioteca ctype.h
            return 0;
        }
    }
    return 1;
}

// Função auxiliar: verifica tamanho válido
int tamanho_valido(int tamanho) {
    return (tamanho == 8 || tamanho == 9 || tamanho == 10 || tamanho == 11);
}

// Função 1 (agora usando outras funções)
int telefone_valido(const char *telefone) {
    int tamanho = strlen(telefone);
    return tamanho_valido(tamanho) && so_digitos(telefone);
}

// Função 2 (permanece igual)
int extrair_ddd(const char *telefone) {
    int tamanho = strlen(telefone);
    int ddd = 0;
    
    if (tamanho == 10 || tamanho == 11) {
        sscanf(telefone, "%2d", &ddd);
        return ddd;
    }
    
    return 0;
}

// Função para mostrar resultado formatado
void mostrar_resultado(const char *telefone, int valido, int ddd) {
    printf("%-15s -> ", telefone);
    
    if (valido) {
        if (ddd != 0) {
            printf("VÁLIDO (DDD: %d)\n", ddd);
        } else {
            printf("VÁLIDO (sem DDD)\n");
        }
    } else {
        printf("INVÁLIDO\n");
    }
}

// Função principal
int main() {
    printf("=== TESTE DE TELEFONES ===\n\n");
    
    char *testes[] = {
        "21912316165", "1132316165", "71912316165", 
        "323231616", "32316165", "912316165",
        "123", "abcdef", "2191231616A"
    };
    
    for (int i = 0; i < 9; i++) {
        int valido = telefone_valido(testes[i]);
        int ddd = extrair_ddd(testes[i]);
        mostrar_resultado(testes[i], valido, ddd);
    }
    
    return 0;
}