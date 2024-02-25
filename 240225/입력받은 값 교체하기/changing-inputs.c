#include <stdio.h>

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    printf("%d %d", a, b);

    return 0;
}