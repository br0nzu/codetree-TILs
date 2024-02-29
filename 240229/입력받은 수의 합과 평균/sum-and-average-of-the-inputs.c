#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);

    int sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &a);

        sum += a;
    }

    double average = (double)sum / n;

    printf("%d %.1lf", sum, average);

    return 0;
}