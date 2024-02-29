#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int prod = 1;

    for(a; a <= b; a++) {
        prod *= a;
    }

    printf("%d", prod);
    
    return 0;
}