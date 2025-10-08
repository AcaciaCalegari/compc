//soma numeros pares d 2 a 20

#include <stdio.h>

int main() {
int soma = 0; // Acumulador inicializado
int numero = 2; // Começa com o primeiro número par
while (numero <= 20) { // Condição: até numero ser maior que 20
soma += numero; // Adiciona o número par atual ao acumulador
numero += 2; // Incrementa para o próximo número par
}
printf("Soma dos números pares de 2 a 20: %d\n", soma);
return 0;
}
