//27-09-2025

//data e hora em tmp real

#include <stdio.h>
#include <time.h>

int main() {
    // 1. Obtém o tempo atual em segundos (formato time_t)
    time_t tempo_atual;
    time(&tempo_atual);

    // 2. Converte o tempo para a estrutura de tempo local (struct tm)
    struct tm *info_tempo = localtime(&tempo_atual);

    // 3. Formata a data e a hora em uma string personalizada
    char buffer[80];
    strftime(buffer, sizeof(buffer), "Hoje eh %A, %d de %B de %Y, %H:%M:%S", info_tempo);

    // Exibe o resultado formatado
    printf("%s\n", buffer);

    return 0;
}
