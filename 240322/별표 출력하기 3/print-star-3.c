#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < (2 * n) - (2 * i) - 1; j++) {
            printf("* ");
        }
        
        printf("\n");

        for(int k = 0; k <= i; k++) {
            printf("  ");
        }
    }
    return 0;
}