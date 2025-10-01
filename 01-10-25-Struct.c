//exemplo 1 do slide d structs
//representa um ponto em um plano 2D, que possui coordenadas x e y

#include <stdio.h>

// 1. Declaração da struct Ponto
struct Ponto {
float x;
float y;
};


int main() {
    
// 2. Declaração de variáveis do tipo struct Ponto
struct Ponto p1; // variável p1 tipo Ponto
struct Ponto p2 = {10.0, 20.0}; //Inicializa p2

// 3. Acessando e atribuindo valores aos membros
p1.x = 5.0;
p1.y = 8.0;

printf("Ponto p1: (%f, %f)\n", p1.x, p1.y);
// Saída: (5.0, 8.0)
printf("Ponto p2: (%f, %f)\n", p2.x, p2.y);
// Saída: (10.0, 20.0)
return 0;
}
