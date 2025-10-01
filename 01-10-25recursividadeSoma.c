// exemplo 1 d recursividade do slide
//01/10/25


#include <stdio.h>

int soma(int n) {
// Caso base
  if (n == 1) {
  return 1;
  }
  
// Caso recursivo
return n + soma(n-1);
}

int main() {
  int resultado = soma(45); 
    printf("Soma: %d\n", resultado);
    return 0;
}
