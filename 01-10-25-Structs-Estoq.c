//01-10-25

//ex2 do slide d structs
//produtos no estoq
//structs iniciando membros diretamente

#include <stdio.h>

//inicialização d membros na declaracao

// Definição da struct Produto
struct Produto {
int id;
char nome[100];
int quantidadeEstoque;
};



int main() {
// Inicializando a struct durante a declaração
struct Produto prod1 = {101, "Monitor LED 24", 50};
struct Produto prod2 = {.nome = "Teclado Mecânico", .id = 203,
.quantidadeEstoque = 120}; // Ordem arbitrária
printf("Produto 1:\n");
printf(" ID: %d\n", prod1.id);
printf(" Nome: %s\n", prod1.nome);
printf(" Estoque: %d\n\n", prod1.quantidadeEstoque);
printf("Produto 2:\n");
printf(" ID: %d\n", prod2.id);
printf(" Nome: %s\n", prod2.nome);
printf(" Estoque: %d\n", prod2.quantidadeEstoque);
return 0;
}
