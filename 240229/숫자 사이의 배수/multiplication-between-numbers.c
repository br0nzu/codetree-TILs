#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 0, cnt = 0;

    for(a; a <= b; a++) {
        if(a % 5 == 0 || a % 7 == 0) {
            sum += a;
            cnt++; 
        }
    }

    double average = (double)sum / cnt;

    printf("%d %.1lf", sum, average);

    return 0;
}