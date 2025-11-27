// https://judge.beecrowd.com/pt/problems/view/1555

#include <stdio.h>
 
int main() {
    int N = 0;
    int maior = 0;
    
    scanf("%d", &N);
    
    int inputs[N][2];
    int outputs[N][3];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &inputs[i][0], &inputs[i][1]);
    }
    
    for (int i = 0; i < N; i++) {
        outputs[i][0] = (3 * inputs[i][0]) * (3 * inputs[i][0]) + (inputs[i][1] * inputs[i][1]);
        outputs[i][1] = (2 * (inputs[i][0] * inputs[i][0])) + ((5 * inputs[i][1]) * (5* inputs[i][1]));
        outputs[i][2] = (-100 * inputs[i][0]) + (inputs[i][1] * inputs[i][1] * inputs[i][1]);
    }
    
    for (int i = 0; i < N; i++) {
        maior = 0;
        if (outputs[i][0] > maior) {
            maior = outputs[i][0];
        }
        
        if (outputs[i][1] > maior) {
            maior = outputs[i][1];
        }
            
        if (outputs[i][2] > maior) {
            maior = outputs[i][2];
        }
            
        if (maior == outputs[i][0]) {
            printf("Rafael ganhou\n");
        } else if (maior == outputs[i][1]) {
            printf("Beto ganhou\n");
        } else {
            printf("Carlos ganhou\n");
        }
    }
 
    return 0;
}
