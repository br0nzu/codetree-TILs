#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int prod = 1;

        for(a; a <= b; a++) {
            prod *= a;
        }

        printf("%d\n", prod);
    }
    
    return 0;
}