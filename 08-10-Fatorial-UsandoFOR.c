//fatorial usando for

#include<stdio.h>

long int fatorial(int n) {
long int resultado = 1; // Inicializa o resultado com 1
for (int i = 1; i <= n; i++) { // Loop de 1 até n
resultado *= i; // Multiplica o resultado pelo valor atual de i
}
return resultado; // Retorna o fatorial calculado
}


int main()
{
printf("Fatorial de 5 eh ");
printf("%ld", fatorial(5));
return 0;
}
