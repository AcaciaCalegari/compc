//machineteaching

//26/08/2025

//questão 1
//em um sistema de empilhamento de caixas , cada caixa pquena tem peso 1, e cada caixa grande tem peso 3.
// deseja-se saber o peso total de uma pilha , dado o numero de caixas pequenas e grandes. 

// escreva a função int carga(int pequenas, int grandes) q recebe a quantidade de 
//caixas pequenas e grandes e retorna o peso total da pilha

#include <stdio.h>

int carga(int pequenas , int grandes) {
    return (pequenas*1)+(grandes*3);
}






//questao 2
//Um sistema de codificação utiliza um deslocamento fixo no alfabeto para alterar caracteres: 
//dado um caracter entre "a" e "w" , deve retornar o caracter q está a 3 posições a frente no 
//alfabeto. por exemplo "a" vira "d"

//crie a função char codifica(char letra) , q dada uma letra retorna a letra resultante após a codificação

char codifica(char letra){
    if(letra >= 'a' && letra <= 'w'){
        return letra + 3;
    }
    else {
        return letra;
    }
}






//questão 3
//uma escola aplica 3 avaliações com pesos diferentes:
//a primeira nota tem peso 2
//a segunda nota tem peso 3
//a terceira nota tem peso 5
//implemente a função float media_ponderada(float n1, float n2, float n3) , q 
//dada as 3 notas , retorna a media ponderada das avaliações

float media_ponderada(float n1, float n2, float n3){
    return(n1*2 + n2* 3 + n3*5)/10;
}







//questao 4
//um motorista de aplicativo possui um tanque de combustivel com uma certa quantidade de litros disponiveis.
// cada viagem consome exatamente 2.7 litros. Sabendo quantos litros estão disponiveis no tanque, implemente 
//a função int num_viagens(float litros_disponiveis),q retorna o num maximo de viagens
// completas q podem ser feitas por esse motorista


#include <stdio.h>
#include <math.h>

int num_viagens(float litros_disponiveis){
    return(int)(litros_disponiveis / 2.7);
}







//questão 5
//Um armazém está organizando pacotes em caixas . Cada caixa possui um limite de peso q suporta.
// Implemente a função int itens_caixa(float peso_item, float limite_caixa) que dado o peso de um unico item e o 
//peso total suportado, retorna quantos itens cabem na caixa, sem ultrapassar seu limite

#include <stdio.h>
#include <math.h>

int itens_caixa(float peso_item, float limite_caixa){
    if (peso_item <= 0){
        return 0;
    }
    return (int)(limite_caixa / peso_item);
}







//questao 6
//implemente a função float area_circulo(float r) , q recebe o raio r de um círculo
// como parametro e retorna sua area.
//caso decida criar uma variavel p/ PI, o tipo dela deve ser double

#include <stdio.h>
#include <math.h>


float area_circulo(float r) {
    double PI = 3.1415;
    return r * r * PI;
}







//questão 7
//Considere duas circunferencias concêntricas, ou seja, com o mesmo centro: uma circunferencia maior de raio r_maior 
//e uma circunferencia menor, com raio r_menor.
//o formato formado entre essas duas circunferencias é chamado de coroa circular.
// uma especie de "anel" delimitado pelas bordas dos dois circulos , e sua area é calculada sutraindo a 
//area do circulo menor da area do circulo maior. 
//implemente a função float area_coroa_circular(float r_maior, float r_menor) que retorna a area da
//coroa circular formada pelas circunferencias de raio r_maior e r_menor.
//copie a função float area_circulo(float r) implementada na questão anterior e use-a nesse exercicio para 
//calcular as areas dos circulos de raios r_maior e r_menor.
//retorne a diferença entre elas.
//considere pi = 3.1415
//o valor de r_maior será sempre maior ou igual a r_menor

//a questão anterior fiz assim:

/* #include <stdio.h>
#include <math.h>

float area_circulo(float r) {
    double PI = 3.1415;
    return r * r * PI;
} */

#include <stdio.h>
#include <math.h>

float area_circulo(float r){
    double PI = 3.1415;
    return r * r * PI;
}

float area_coroa_circular(float r_maior, float r_menor){
    float areaMaior = area_circulo(r_maior);
    float areaMeno = area_circulo(r_menor);
    return areaMaior - areaMeno;
}







//questão 8
//Em um plano cartesiano a distancia euclidiana entre dois pontos é calculada como a raiz quadrada da
//soma dos quadrados das diferenças entre as coordenadas correspondentes dos pontos.
//é uma medida amplamente utilizada em diversas areas, como geometria, análise de dados e aprendizado de maquina.
//implemente a função float distancia(float x1, float y1, float x2, float y2) , q
//retorna a distancia euclidiana entre o ponto 1 e x2, y2 são as coordenadas do ponto 2.

//obs: é permitido usar a função sqrtf da biblioteca math.h para o calculo da raíz quadrada

#include <math.h>
#include <stdio.h>

float distancia(float x1, float y1, float x2, float y2){
    return sqrtf((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}








//questão 9
//o perímetro de um triangulo é a soma dos comprimentos dos seus três lados.implemente a função
//float perimetro_triangulo(float x1, float y1, float x2, float y2, float x3, float y3) , q retorna
//o perímetro do triangulo formado pelos vertices 1, 2 e 3. onde x1 , y1 são as coordenadas do vertice 1.
//x2 , y2 são as coordenadas do vertice 2. e x3 e y3 são coordenadas do vertice 3.
//para auxiliar na tarefa, utilize a função float distancia(float x1, float y1, float x2, float y2)
//do exercicio anterior para calcular o comprimento dos lados do triangulo

#include <stdio.h>
#include <math.h>

float distancia (float x1, float y1, float x2, float y2) {
    return sqrtf((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

float perimetro_triangulo(float x1, float y1, float x2, float y2, float x3, float y3){
    float vert1 = distancia(x1,y1,x2,y2);
    float vert2 = distancia(x2,y2,x3,y3);
    float vert3 = distancia(x3,y3,x1,y1);
    return vert1+vert2+vert3;
}










//questao 10
//em uma loja internacional, clientes podem realizar pagamentos em dolares, mas os preços dos produtos são exibidos em reais.
//o sistema da loja deve calcular quanto de troco(em reais) deve ser devolvido ao cliente,considerando a cotação d dolar no momento d compra.
//implemente a função float calcula_troco(float valor_compra, float valor_pago , float cotacao_dolar) , q recebe:
//valor_compra : o valor total da compra (em reais) ,
//valor_pago : o valor pago pelo cliente (em dolares) ,
//cotacao_dolar : o valor de 1 dolar em reais no momento da compra. A função deve retornar o valor do troco a ser devolvido ao cliente, em reais.
//obs: considere que sempre será pago uma quantia igual ou maior que o valor da compra

#include <stdio.h>

float calcula_troco(float valor_compra, float valor_pago, float cotacao_dolar){
    float huebr = valor_pago * cotacao_dolar;
    float tomatroco = huebr - valor_compra;
    return tomatroco;
}


















