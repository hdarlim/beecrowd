// https://judge.beecrowd.com/pt/problems/view/1012

#include <stdio.h>

int main() {
    double A = 0;
    double B = 0;
    double C = 0;
    double area_triangulo = 0;
    double area_circulo = 0;
    double area_trapezio = 0;
    double area_quadrado = 0;
    double area_retangulo = 0;
    double pi = 3.14159;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    area_triangulo = (A * C) / 2;
    area_circulo = pi * (C * C);
    area_trapezio = ((A + B) * C) / 2;
    area_quadrado = B * B;
    area_retangulo = A * B;
    
    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);

    return 0;
}
