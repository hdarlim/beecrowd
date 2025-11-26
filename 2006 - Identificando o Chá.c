// https://judge.beecrowd.com/pt/problems/view/2006

#include <stdio.h>
 
int main() {
 
    int cha_real = 0;
    int respostas[5];
    int corretas = 0;
    
    scanf("%d", &cha_real);
    
    for (int i = 0; i < 5; i++) {
        scanf("%d ", &respostas[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        if (respostas[i] == cha_real) {
            corretas++;
        }
    }
    
    printf("%d\n", corretas);
 
    return 0;
}
