//contador d 1 a 9

#include <stdio.h>
int main() {
int contador = 0; // Inicializa o contador
printf("Contando de 1 a 9:\n");
for (int i = 1; i <= 9; i++) {
contador++; // Incrementa o contador a cada iteração
printf("Iteração %d: Contador = %d\n", i, contador);
}
printf("Contagem final: %d\n", contador);
return 0;
}
