#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 3000) {
        printf("book");
    }
    else if (n < 1000) {
        printf("no");
    }
    else {
        printf("mask");
    }
    
    return 0;
}