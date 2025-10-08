#include <stdio.h>
#include <string.h>
#include <stdbool.h> // Para usar o tipo bool

// Função para verificar se uma string é um palíndromo

bool isPalindrome(char str[]) {
int length = strlen(str);
// Inicializa dois índices: um no início (i) e um no fim (j)
for (int i = 0, j = length - 1; i < j; i++, j--) {
// Se os caracteres nas posições i e j forem diferentes, não é palíndromo
if (str[i] != str[j]) {
return false;
}
}
  
// Se o loop terminar, a string é um palíndromo
return true;
}

int main() {
char s1[] = "arara";
char s2[] = "hello";
printf("'%s' é palíndromo? %s\n", s1, isPalindrome(s1) ? "Sim" : "Não"); // Saída: Sim
printf("'%s' é palíndromo? %s\n", s2, isPalindrome(s2) ? "Sim" : "Não"); // Saída: Não
return 0;
}
