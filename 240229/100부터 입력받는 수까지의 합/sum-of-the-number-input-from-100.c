#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for(n; n <= 100; n++) {
        sum += n;
    }

    printf("%d", sum);
    
    return 0;
}