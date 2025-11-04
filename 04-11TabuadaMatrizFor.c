//04-11-25

//tabuada do slide d matrizes e lacos (usando estrutura for)



#include <stdio.h>

void imprimirTabuada() {
    int i, j;
    
    printf("=== TABUADA 5x5 ===\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            printf("%d\t", i * j);  // \t para alinhar
        }
        printf("\n");
    }
}

int main() { 
    imprimirTabuada();
    return 0;
}
