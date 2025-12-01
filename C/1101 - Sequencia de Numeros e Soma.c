// https://judge.beecrowd.com/pt/problems/view/1101

#include <stdio.h>

int main() {
    int m = 0;
    int n = 0;
    int maior = 0;
    int menor = 0;
    int soma = 0;
    
    while (1) {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0) {
            break;
        }
        
        if (m > n) {
            maior = m;
            menor = n;
        } else {
            maior = n;
            menor = m;
        }
        
        soma = 0;
        
        for (int i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
            if (i == maior) {
                printf("Sum=%d\n", soma);
            }
        }
    }
    
    return 0;
}
