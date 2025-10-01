//01/10/25
//slide d struct exercicio 2

#include <stdio.h>
#include <string.h> // Para strcpy

//prog q diz o nome do livro, autor,ano,preço antigo e novo

// Definição da struct Livro
struct Livro {
char titulo[50];
char autor[50];
int anoPublicacao;
float preco;
};


int main() {
  
// Declaração de uma variável do tipo Livro
struct Livro meuLivro;
// Acessando e atribuindo valores aos membros
strcpy(meuLivro.titulo, "O Pequeno Príncipe");
strcpy(meuLivro.autor, "Antoine de Saint-Exupéry");
meuLivro.anoPublicacao = 1943;
meuLivro.preco = 29.90;
// Acessando e imprimindo os valores dos membros
printf("Título: %s\n", meuLivro.titulo);
printf("Autor: %s\n", meuLivro.autor);
printf("Ano: %d\n", meuLivro.anoPublicacao);
printf("Preço: R$ %.2f\n", meuLivro.preco);
// Modificando um membro
meuLivro.preco = 25.00;
printf("Novo Preço: R$ %.2f\n", meuLivro.preco);
return 0;
}
