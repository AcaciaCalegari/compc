//Função para calcular MDC de um número fornecido como entrada

#include <stdio.h>
int main() {
    int a, b, i;
    printf("Dgt dois numeros: ");
    scanf("%d %d", &a, &b);
    
    for (i= (a < b ? a : b); i>=1 ; i--)
        if (a % i == 0 && b % 1 == 0) break;
        
    printf("MDC = %d\n",i);
    return 0;
}
