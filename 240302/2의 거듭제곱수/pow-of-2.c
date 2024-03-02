#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int prod = 1;

    for(int i = 1; i <= n; i++) {
        prod *= 2;
        
        if(n == prod) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}