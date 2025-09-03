//codigo enviado pelo Marcus no dia 20/08/2025

//revendo esse codg no labnet dia 26/08

//vou chamá-lo d formas geometriks

#include <stdio.h>
#include <math.h>

float area_quadrado(float lado) {
    return lado * lado;
}

float area_retangulo(float base, float altura) {
    return base * altura;
}

float area_circulo(float raio) {
    return M_PI * raio * raio;
}

float area_triangulo(float a, float b, float c) {
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

float altura_triangulo(float a, float b, float c) {
    float area = area_triangulo(a, b, c);
    return (2 * area) / a;
}

float area_prisma_retangular(float comp, float larg, float alt) {
    return 2 * (comp * larg + comp * alt + larg * alt);
}

float area_cubo(float lado) {
    return 6 * area_quadrado(lado);
}

float area_piramide_quadrada(float base, float altura_lateral) {
    float area_base = area_quadrado(base);
    float area_lateral = 2 * base * altura_lateral;
    return area_base + area_lateral;
}

float area_cilindro(float raio, float altura) {
    float area_base = area_circulo(raio);
    float circunferencia = 2 * M_PI * raio;
    return 2 * area_base + circunferencia * altura;
}

float area_cone(float raio, float altura) {
    float area_base = area_circulo(raio);
    float geratriz = sqrt(raio * raio + altura * altura);
    float area_lateral = M_PI * raio * geratriz;
    return area_base + area_lateral;
}

int main() {
    int opcao;
    printf("Escolha a forma geometrica:\n");
    printf("1 - Quadrado\n2 - Retangulo\n3 - Circulo\n4 - Triangulo (por lados)\n");
    printf("5 - Prisma retangular\n6 - Cubo\n7 - Piramide quadrada\n8 - Cilindro\n9 - Cone\n");
    scanf("%d", &opcao);

    float a, b, c;
    switch (opcao) {
        case 1:
            printf("Lado: ");
            scanf("%f", &a);
            printf("Area: %.2f\n", area_quadrado(a));
            break;
        case 2:
            printf("Base e altura: ");
            scanf("%f %f", &a, &b);
            printf("Area: %.2f\n", area_retangulo(a, b));
            break;
        case 3:
            printf("Raio: ");
            scanf("%f", &a);
            printf("Area: %.2f\n", area_circulo(a));
            break;
        case 4:
            printf("3 lados: ");
            scanf("%f %f %f", &a, &b, &c);
            printf("Area: %.2f\n", area_triangulo(a, b, c));
            printf("Altura relativa ao lado %.2f: %.2f\n", a, altura_triangulo(a, b, c));
            break;
        case 5:
            printf("Comprimento, largura, altura: ");
            scanf("%f %f %f", &a, &b, &c);
            printf("Area: %.2f\n", area_prisma_retangular(a, b, c));
            break;
        case 6:
            printf("Lado: ");
            scanf("%f", &a);
            printf("Area: %.2f\n", area_cubo(a));
            break;
        case 7:
            printf("Lado da base e altura lateral: ");
            scanf("%f %f", &a, &b);
            printf("Area: %.2f\n", area_piramide_quadrada(a, b));
            break;
        case 8:
            printf("Raio e altura: ");
            scanf("%f %f", &a, &b);
            printf("Area: %.2f\n", area_cilindro(a, b));
            break;
        case 9:
            printf("Raio e altura: ");
            scanf("%f %f", &a, &b);
            printf("Area: %.2f\n", area_cone(a, b));
            break;
        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}