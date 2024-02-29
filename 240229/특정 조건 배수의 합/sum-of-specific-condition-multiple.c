#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 0;

    if(a >= b) {
        for(b; b <= a; b++) {
            if(b % 5 == 0) {
                sum += b;
            }
        }
    }
    else {
        for(a; a <= b; a++) {
            if(a % 5 == 0) {
                sum += a;
            }
        }
    }

    printf("%d", sum);

    return 0;
}