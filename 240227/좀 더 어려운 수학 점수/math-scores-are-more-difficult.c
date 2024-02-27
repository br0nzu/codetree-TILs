#include <stdio.h>

int main() {
    int m1, e1, m2, e2;
    scanf("%d %d %d %d", &m1, &e1, &m2, &e2);

    if(m1 > m2) {
        printf("A");
    }
    else if (m1 < m2) {
        printf("B");
    }
    else {
        if (e1 > e2) {
            printf("A");
        }
        else {
            printf("B");
        }
    }
    
    return 0;
}