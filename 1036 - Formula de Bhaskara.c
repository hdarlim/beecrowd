// https://judge.beecrowd.com/pt/problems/view/1036

#include <stdio.h>
#include <math.h>
 
int main() {
    double A = 0;
    double B = 0;
    double C = 0;
    double R1 = 0;
    double R2 = 0;
    double delta = 0;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = (B * B) - (4 * A * C);

    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
 
    return 0;
}
