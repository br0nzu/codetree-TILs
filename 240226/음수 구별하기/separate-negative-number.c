#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    if ( n < 0 ) {
        printf("%d\n", n);
        printf("minus");
    }
    else {
        printf("%d", n);
    }

    return 0;
}