#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);

    int sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &a);

        if(a % 2 != 0 && a % 3 == 0) {
            sum += a;
        }
    }

    printf("%d", sum);

    return 0;
}