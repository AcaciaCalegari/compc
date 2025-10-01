// exemplo 3 d recursividade do slide (fibonacci)
//01/10/25

//ineficiente p/ grandes valores d n

//vai somando o proximo com anterior :
// 0 , 0+1= 1, 1+1= 2, 2+1=3 , 2+3= 5, 3+5= 8 ...


#include <stdio.h>

int fibonacci(int n) {
// Casos base
  if (n == 0) return 0;
  if (n == 1) return 1;

// Caso recursivo
return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  printf("fibonacci = %d\n", fibonacci(41)); 
    return 0;
}
