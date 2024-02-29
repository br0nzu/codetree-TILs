#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }

    if(n == sum) {
        printf("P");
    }
    else {
        printf("N");
    }
    
    return 0;
}