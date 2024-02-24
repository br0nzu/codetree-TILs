#include <stdio.h>

int main() {
    
    int a = 3, b = 5, temp = 0;
    temp = a;
    a = b;
    b = temp;

    printf("%d\n", a);
    printf("%d", b);

    return 0;
}