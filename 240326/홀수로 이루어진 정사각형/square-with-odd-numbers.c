#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    n = 2 * n + 9;
    int k = n;

    for(int i = 11; i <= n; i += 2) {
        for(int j = i; j <= k; j += 2) {
            printf("%d ", j);
        }
        k += 2;
        printf("\n");
    }

    return 0;
}