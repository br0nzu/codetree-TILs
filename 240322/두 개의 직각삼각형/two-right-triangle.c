#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = n; j > i; j--) {
            printf("*");
        }
        
        for(int k = 1; k <= 2 * i; k++) {
            printf(" ");
        }

        for(int l = n; l > i; l--) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}