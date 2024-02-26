#include <stdio.h>

int main() {
    int A1, A2, B1, B2;
    scanf("%d %d", &A1, &A2);
    scanf("%d %d", &B1, &B2);

    if(A1 > B1 && A2 > B2) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}