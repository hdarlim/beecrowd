// https://judge.beecrowd.com/pt/problems/view/1197

#include <stdio.h>
 
int main() {
    int v = 0;
    int t = 0;
    int s = 0;
    
    while (scanf("%d %d", &v, &t) != EOF) {
        s = 2 * v * t;
        
        printf("%d\n", s);
    }
    
    return 0;
}
