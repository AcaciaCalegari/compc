#include <stdio.h>
#include <ctype.h>

// Função para validar número de telefone
int valida(const char *t) {
    int i = 0;
    
    // Percorre cada caractere da string
    while (t[i]) {
        // Verifica se não é dígito ou se excedeu o tamanho máximo
        if (!isdigit(t[i++]) || i > 11)
            return 0;  // Retorna falso se caractere inválido ou tamanho excedido
    }
    
    // Retorna verdadeiro apenas se o tamanho for 8, 9, 10 ou 11 dígitos
    return i == 8 || i == 9 || i == 10 || i == 11;
}

// Função para extrair o DDD do número de telefone
int ddd(const char *t) {
    int i = 0;
    
    // Calcula o tamanho da string
    while (t[i])
        i++;
    
    // Extrai o DDD apenas se o tamanho for 10 ou 11 dígitos
    if (i == 10 || i == 11) {
        // Converte os dois primeiros dígitos em um número inteiro
        return (t[0] - '0') * 10 + (t[1] - '0');
    }
    
    // Retorna 0 se não for possível extrair o DDD
    return 0;
}

// Função principal
int main() {
    // Array com números de telefone para teste
    char *n[] = {
        "21912316165",  // 11 dígitos com DDD
        "1132316165",   // 10 dígitos com DDD  
        "71912316165",  // 11 dígitos com DDD
        "323231616",    // 9 dígitos sem DDD
        "32316165",     // 8 dígitos sem DDD
        "912316165",    // 9 dígitos sem DDD
        "123",          // Inválido: muito curto
        "abc"           // Inválido: não é número
    };
    
    // Testa cada número do array
    for (int i = 0; i < 8; i++) {
        if (valida(n[i])) {
            // Número válido: mostra com DDD (se existir)
            printf("%s -> VÁLIDO (DDD: %d)\n", n[i], ddd(n[i]));
        } else {
            // Número inválido
            printf("%s -> INVÁLIDO\n", n[i]);
        }
    }
    
    return 0;
}