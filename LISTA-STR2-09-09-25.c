//Pratik d prog: manipulação d string (Lista pdf d string)
//09/09/2025
//acaciacalegari

#include <stdio.h>
#include <ctype.h>

////Parte 2 DATAS

// Função para validar data em qualquer formato
int diamesano(int a, int b, int c) {
    // a, b, c representam os três componentes da data em qualquer ordem
    
    // Verifica se é um mês válido (1-12)
    if (b < 1 || b > 12) return 0;
    
    // Determina quantos dias tem o mês
    int dias_no_mes;
    if (b == 2) {
        dias_no_mes = 28; // Fevereiro (simplificado)
    } else if (b == 4 || b == 6 || b == 9 || b == 11) {
        dias_no_mes = 30; // Meses com 30 dias
    } else {
        dias_no_mes = 31; // Meses com 31 dias
    }
    
    // Verifica se o dia está dentro do range válido
    return (a >= 1 && a <= dias_no_mes);
}

// Função principal
int main() {
    char entrada[9];
    int x, y, z;
    int fmt1 = 0, fmt2 = 0, fmt3 = 0; // Flags para formatos válidos
    
    // Solicita entrada do usuário
    printf("Digite uma data (formato XX/YY/ZZ): ");
    scanf("%8s", entrada);
    
    // Verifica formato básico
    if (entrada[2] != '/' || entrada[5] != '/') {
        printf("Formato inválido! Use XX/YY/ZZ.\n");
        return 1;
    }
    
    // Converte caracteres para números
    x = (entrada[0] - '0') * 10 + (entrada[1] - '0');
    y = (entrada[3] - '0') * 10 + (entrada[4] - '0');
    z = (entrada[6] - '0') * 10 + (entrada[7] - '0');
    
    // Testa os três formatos possíveis
    fmt1 = diamesano(x, y, z); // Formato dia/mês/ano (XX = dia, YY = mês)
    fmt2 = diamesano(y, x, z); // Formato mês/dia/ano (XX = mês, YY = dia)  
    fmt3 = diamesano(z, y, x); // Formato ano/mês/dia (XX = ano, YY = mês)
    
    // Exibe resultados
    printf("Interpretações válidas: ");
    
    if (fmt1) printf("dd/mm/yy ");
    if (fmt2) printf("mm/dd/yy ");
    if (fmt3) printf("yy/mm/dd ");
    
    if (!fmt1 && !fmt2 && !fmt3) {
        printf("Nenhuma");
    }
    
    printf("\n");
    
    return 0;
}