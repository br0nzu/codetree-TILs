#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);

    int c = a + n;

    for(int i = 0; i < n; i++) {
        printf("%d\n", c);
        c += n;
    }

    return 0;
}