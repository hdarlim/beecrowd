// https://judge.beecrowd.com/pt/problems/view/2374

#include <stdio.h>
 
int main() {
    int n = 0;
    int m = 0;
    int total = 0;
    
    scanf("%d", &n);
    scanf("%d", &m);
    
    total = n - m;
    
    printf("%d\n", total);
 
    return 0;
}
