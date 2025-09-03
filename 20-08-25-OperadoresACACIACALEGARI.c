// 20/08/25 Operadores
//ACACIACALEGARI

//CDG ORIGINAL DO MARCUS, fiz peqnas modfcaçoes
//cdg signifk código


//Os testes das funções devem constar no corpo da função main()

//faça uma função que dados os coeficientes a, b e c, calcula o
//discriminante de um polinômio do segundo grau.



#include <stdio.h>
#include <math.h>


//questao1


// (a) delta
double delta(double a, double b, double c) {
    return (b*b) - (4*a*c);
}

// (b) primeira raiz
double raiz1(double a, double b, double c) {
    return (-b + (float)sqrt(delta(a,b,c))) / (2*a);
}

// (c) segunda raiz
double raiz2(double a, double b, double c) {
    return (-b - (float)sqrt(delta(a,b,c))) / (2*a);
}


//questao2


// (a) distância entre dois pontos
double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// (b) perímetro do triângulo retângulo
double perimetro(double cat1, double cat2) {
    double h = sqrt(cat1*cat1 + cat2*cat2);
    return cat1 + cat2 + h;
}

// (c) sen² + cos²
double soma_sencos(double ang) {
    return pow(sin(ang),2) + pow(cos(ang),2);
}


// Main

int main() {
    double a,b,c;
    double x1,y1,x2,y2;
    double cat1,cat2;
    double ang;

    // ex1
    printf("EX1 - equacao do 2 grau\n");
    printf("digite a, b, c: ");
    scanf("%lf %lf %lf", &a,&b,&c);

    printf("delta = %.2f\n", delta(a,b,c));
    printf("raiz1 = %.2f\n", raiz1(a,b,c));
    printf("raiz2 = %.2f\n\n", raiz2(a,b,c));

    // ex2a
    printf("EX2 (a) - distancia\n");
    printf("digite x1 y1: ");
    scanf("%lf %lf", &x1,&y1);
    printf("digite x2 y2: ");
    scanf("%lf %lf", &x2,&y2);
    printf("distancia = %.2f\n\n", distancia(x1,y1,x2,y2));

    // ex2b
    printf("EX2 (b) - perimetro\n");
    printf("digite os dois catetos: ");
    scanf("%lf %lf", &cat1,&cat2);
    printf("perimetro = %.2f\n\n", perimetro(cat1,cat2));

    // ex2c
    printf("EX2 (c) - sen²+cos²\n");
    printf("digite o angulo (em radianos): ");
    scanf("%lf", &ang);
    printf("sen²+cos² = %.2f\n", soma_sencos(ang));

    return 0;
}
