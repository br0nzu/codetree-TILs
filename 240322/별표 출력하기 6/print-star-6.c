#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < (2 * n) - (2 * i) - 1; j++) {
            printf("* ");
        }
        printf("\n");

        for(int k = 0; k <= i; k++) {
            printf("  ");
        }
    }
    
    printf("*\n");
    
    for(int i = 1; i <= n - 1; i++) {
        
        for(int k = n - 1; k >= i + 1; k--) {
            printf("  ");
        }
        
        for(int j = 0; j < 2 * i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}