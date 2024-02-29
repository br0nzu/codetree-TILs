#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d ", a);

    for(a; a < b;) {
        if(a % 2 != 0) {
            a *= 2;
            printf("%d ", a);
        }
        else {
            a += 3;
            printf("%d ", a);
        }
    }

    return 0;
}