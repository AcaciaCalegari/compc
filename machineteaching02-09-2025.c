//machineteaching 02/09/25


//  Questão1

//numa competição d bebidas , os participantes recebem bebidas diferentes de acordo com sua
//idade e a temperatura do ambiente. As bebidas da competição são : chocolate quente, suco
//e refrigerante.
//implemente a função char bebida(int idade, float temperatura) , q recebe a idade da pessoa 
//e a temperatura do ambiente e retorna:
//'C' para chocolate quente (temperatura <10.0)
//'S' para suco (temperatura >= 10.0 e idade <18)
//'R' para refrigerante (temperatura >= 10.0 e idade >=18)

#include <stdio.h>

char bebida(int idade, float temperatura) {
    if (temperatura < 10.0) {
        return 'C'; 
    }
    else {
        if (idade < 18) {
            return 'S';  
        }
         else {
            return 'R'; 
        }
    }
}







//questão 2

//Anos bissextos ocorrem de 4 em 4 anos. Todos os anos q sejam multiplos de 4 mas q não sejam 
//multiplos de 100, com exceção daqueles q são multiplos de 400, são bissextos
//Crie a função int eh_bissexto(int ano) , q retorna 1 se o ano for bissexto e 0 caso contrário


#include <stdio.h>

int eh_bissexto(int ano) {
    // multiplo de 400 (eh bissexto)
    if (ano % 400 == 0) {
        return 1;
    }
    // multiplo de 100 (nao eh bissexto)
    else if (ano % 100 == 0) {
        return 0;
    }
    // se eh multipl de 4 (eh bissexto)
    else if (ano % 4 == 0) {
        return 1;
    }
    // Naum eh bissexto
    else {
        return 0;
    }
}








//questão 3

//usando a função anterior do ano bissexto , implemente a função 
//contar_bissextos(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
//q ao receber 10 valores inteiros representando anos, retorne quantos desses anos são bissextos


#include <stdio.h>

int eh_bissexto(int ano) {
    // multiplo de 400 (eh bissexto)
    if (ano % 400 == 0) {
        return 1;
    }
    // multiplo de 100 (nao eh bissexto)
    else if (ano % 100 == 0) {
        return 0;
    }
    // se eh multipl de 4 (eh bissexto)
    else if (ano % 4 == 0) {
        return 1;
    }
    // Naum eh bissexto
    else {
        return 0;
    }
}

int contar_bissextos(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) {
    int count = 0;
    
    if (eh_bissexto(a1)) count++;
    if (eh_bissexto(a2)) count++;
    if (eh_bissexto(a3)) count++;
    if (eh_bissexto(a4)) count++;
    if (eh_bissexto(a5)) count++;
    if (eh_bissexto(a6)) count++;
    if (eh_bissexto(a7)) count++;
    if (eh_bissexto(a8)) count++;
    if (eh_bissexto(a9)) count++;
    if (eh_bissexto(a10)) count++;
    
    return count;
}









//questao 4

//uma loja está oferecendo descontos progressivos com base em um codigo de promoçao. implemente
//a função int calcula_desconto(int codigo, float valor_total) , q recebe o codigo de promoção e
//o valor da compra e retorna o valor final a ser pago com base nas seguintes regras:
//Se o codigo for 1: aplica 10% de desconto sobre o valor da compra;
//Se o codigo for 2: aplica 20% de desconto sobre o valor da compra;
//Se o codigo for 3 : aplica 30% de desconto sobre o valor da compra;
//qualquer outro valor de codigo deve resultar em 0% de desconto.

//a função deve retornar o valor final a ser pago , arredondado para o inteiro mais proximo

//para arredondar o float v para o int mais proximo, vc pode fazer: (int)(v+0.5)


#include <stdio.h>

int calcula_desconto(int codigo, float valor_total) {
    float vf = valor_total;
    
    if(codigo == 1) {
        vf = valor_total*0.9;
    }
    else if(codigo == 2) {
        vf = valor_total*0.8;
    }
    else if(codigo == 3) {
        vf = valor_total*0.7;
    }
    return(int)(vf+0.5);
}








//questao 5

//triangulos , se for triangulo retangulo return 2, se não for um triangulo retorna 0 ,
// se for triangulo retorna 1


#include <stdio.h>

int triangulo(float a, float b, float c){
    if ( a, b, c == 0){
        return 0;
    }
    else if (a*a + b*b == c*c){
        return 2;
    }
    else if(a>b+c){
        return 0;
    }
    else if(b>a+c){
        return 0;
    }
    else if(c>=b+a){
        return 0;
    }
    
    else{
        return 1;
    }
}






//questao6

// a poha dessa nota no cdg q errei 2

int situacao_final(float nota1, float nota2, float nota3) {
    if (nota1 < 1.0 || nota2 < 1.0) {
        return 0;
    }
   
    float media = (nota1 + nota2) / 2.0;
    if (media < 5.0) {
        return 0;
    }
     
     if (nota1 + nota2 >= 7.0) {
        return 1;
    }
    
    if (nota3 <= 5.0){
        return 0;
    }
   
    float tnc = (media + nota3) <= 19.9;
        return 0;
    
    float krlh = (media + nota3) / 3.0;
    if (krlh <=4.9){
        return 0;
    }
 }



 //aki acho q errei 2 ou 3

 int situacao_final(float nota1, float nota2, float nota3) {
    if (nota1 < 1.0 || nota2 < 1.0) {
        return 0;
    }
   
    float media = (nota1 + nota2) / 2.0;
    if (media < 5.0) {
        return 0;
    }
     
     if (nota1 + nota2 >= 7.0) {
        return 1;
    }
    
    if (nota3 <= 5.0){
        return 0;
    }
   
    float tnc = (media + nota3) <= 19.9;
        return 0;
    
    float krlh = (media + nota3) / 3.0;
    if (krlh <=4.9){
        return 0;
    }
 }


//aki errei 1

#include <stdio.h>

int situacao_final(float n1, float n2, float n3) {
    // 1º: Verifica se n1 ou n2 são menores que 1.0
    // (n3 pode ser 0 se n1+n2>=7.0, por isso verificação separada)
    if (n1 < 1.0 || n2 < 1.0) {
        return 0;
    }
    
    // 2º: Verifica se a soma n1 + n2 é >= 7.0
    // Neste caso, n3 pode ser 0 (não precisa verificar n3)
    if (((n1 + n2)/2) >= 7.0) {
        return 1;
    }
    
    // 3º: Se n1+n2 < 7.0, então verifica se n3 é menor que 1.0
    if (n3 <= 1.0) {
        return 0;
    }
    
    // 4º: Verifica se a média entre n1 e n2 é menor que 5.0
    float media = (n1 + n2) / 2.0;
    if (media < 5.0) {
        return 0;
    }
    
    // 5º: Se passou por todas as verificações, retorna 1
    return 1;
}





























