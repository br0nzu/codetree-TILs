#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 0;

    for(a; a <= b; a++) {
        if(a % 6 == 0 && a % 8 != 0) {
            sum += a;
        }
    }

    printf("%d", sum);
    
    return 0;
}