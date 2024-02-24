#include <stdio.h>

int main() {
    
    int a = 5, b = 6, c = 7, temp1 = 0, temp2 = 0;
    temp1 = b;
    temp2 = c;
    b = a;
    c = temp1;
    a = temp2;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", c);

    return 0;
}