#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    double c = a + b, d = a - b; 
    printf("%.2lf", c / d);

    return 0;
}