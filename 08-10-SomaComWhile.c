//soma qlq numero ate o usuario dgitar zer0

#include <stdio.h>

int main() {
int numero;
int soma = 0;
printf("Digite números para somar (0 para sair):\n");
scanf("%d", &numero); // Lê o primeiro número
while (numero != 0) { // A parada depende do usuário
soma += numero;
scanf("%d", &numero);
}
printf("Soma total: %d\n", soma);
return 0;
}
