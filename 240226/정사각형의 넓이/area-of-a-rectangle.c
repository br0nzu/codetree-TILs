#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int square = n * n;

    if (n < 5) {
        printf("%d\n", square);
        printf("tiny");
    }
    else {
        printf("%d", square);
    }
    
    return 0;
}