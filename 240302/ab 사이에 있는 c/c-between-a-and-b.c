#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    bool condition = false;

    for(a; a <= b; a++) {
        if(a % c == 0) {
            condition = true;
        }
    }

    if(condition == true) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}