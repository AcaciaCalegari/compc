//inverte as palavras

#include <stdio.h>
#include <string.h> // Para usar strlen()
int main() {
char str[] = "Hello World"; // String a ser invertida
int length = strlen(str); // Calcula o comprimento da string
printf("String original: %s\n", str);
printf("String invertida: ");
// Loop for que percorre a string do último caractere ao primeiro
for (int i = length - 1; i >= 0; i--) {
printf("%c", str[i]); // Imprime o caractere na posição atual
}
printf("\n");
return 0;
} 
