// https://judge.beecrowd.com/pt/problems/view/1014

#include <stdio.h>
 
int main() {
    int X = 0;
    float Y = 0.0;
    float Z = 0.0;

    scanf("%d", &X);
    scanf("%f", &Y);

    Z = (float)X / Y;

    printf("%.3f km/l\n", Z);

    return 0;
}