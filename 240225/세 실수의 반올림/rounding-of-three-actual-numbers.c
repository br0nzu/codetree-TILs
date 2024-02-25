#include <stdio.h>

int main() {
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    printf("%.3lf\n", a);
    printf("%.3lf\n", b);
    printf("%.3lf", c);

    return 0;
}