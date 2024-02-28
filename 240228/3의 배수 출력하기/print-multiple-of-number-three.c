#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1, j = 3;
    
    while(j <= n) {
        i++;
        printf("%d ", j);
        j = 3 * i;
    }
    
    return 0;
}