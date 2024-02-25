#include <stdio.h>

int main() {
    char c[100];
    double a, b;

    scanf("%s", c);
    scanf("%lf %lf", &a, &b);

    printf("%s\n", c);
    printf("%.2lf\n", a);
    printf("%.2lf", b);

    return 0;
}