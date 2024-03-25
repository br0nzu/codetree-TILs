#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    n *= 2;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j <= i; j += 2) {
                printf("* ");
            }
        }
        else {
            for(int j = 0; j < (n / 2) - (i / 2); j++) {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}