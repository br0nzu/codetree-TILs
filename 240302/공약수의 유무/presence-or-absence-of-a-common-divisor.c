#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    bool condition = false;

    for(a; a <= b; a++) {
        if(1920 % a == 0 && 2880 % a == 0) {
            condition = true;
        }
    }

    if(condition = true) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}