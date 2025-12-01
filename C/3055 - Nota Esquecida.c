// https://judge.beecrowd.com/pt/problems/view/3055

#include <stdio.h>
 
int main() {
 
    int A = 0;
    int B = 0;
    int M = 0;
    
    scanf("%d", &A);
    scanf("%d", &M);
    
    B = (2 * M) - A;
    
    printf("%d\n", B);
 
    return 0;
}
