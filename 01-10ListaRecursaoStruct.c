//AcaciaCalegari
//Lista Struct e Recursao
//01-10-25

#include <stdio.h>

// 1. Struct para representar uma fração
typedef struct {
    int numerador;
    int denominador;
} Fracao;

// 1.1. Função para multiplicar frações
Fracao multiplicar_fracoes(Fracao f1, Fracao f2) {
    Fracao resultado;
    resultado.numerador = f1.numerador * f2.numerador;
    resultado.denominador = f1.denominador * f2.denominador;
    return resultado;
}

// 1.2. Função para dividir frações
Fracao dividir_fracoes(Fracao f1, Fracao f2) {
    Fracao resultado;
    resultado.numerador = f1.numerador * f2.denominador;
    resultado.denominador = f1.denominador * f2.numerador;
    return resultado;
}

// 1.3. Função recursiva para calcular MDC
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

// 1.4. Função recursiva para calcular MMC
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

// 1.5. Função para somar frações
Fracao somar_fracoes(Fracao f1, Fracao f2) {
    Fracao resultado;
    int denominador_comum = mmc(f1.denominador, f2.denominador);
    
    resultado.numerador = (f1.numerador * (denominador_comum / f1.denominador)) + 
                         (f2.numerador * (denominador_comum / f2.denominador));
    resultado.denominador = denominador_comum;
    
    return resultado;
}

// 1.6. Função para imprimir fração
void printfracao(Fracao f) {
    printf("%d / %d\n", f.numerador, f.denominador);
}

// Função auxiliar para simplificar frações
Fracao simplificar_fracao(Fracao f) {
    int divisor = mdc(f.numerador, f.denominador);
    f.numerador /= divisor;
    f.denominador /= divisor;
    return f;
}


int main() {
    Fracao f1 = {2, 3};  // 2/3
    Fracao f2 = {3, 4};  // 3/4
    
    printf("Frações originais:\n");
    printf("f1 = "); printfracao(f1);
    printf("f2 = "); printfracao(f2);
    
    printf("\nMultiplicação: ");
    Fracao mult = multiplicar_fracoes(f1, f2);
    printfracao(simplificar_fracao(mult));
    
    printf("Divisão: ");
    Fracao div = dividir_fracoes(f1, f2);
    printfracao(simplificar_fracao(div));
    
    printf("Soma: ");
    Fracao soma = somar_fracoes(f1, f2);
    printfracao(simplificar_fracao(soma));
    
    printf("\nTeste MDC e MMC:\n");
    printf("MDC(12, 18) = %d\n", mdc(12, 18));
    printf("MMC(12, 18) = %d\n", mmc(12, 18));
    
    return 0;
}
