#include <stdio.h>

int main() {
    char c;
    int n;
    scanf("%c %d", &c, &n);

    if(c == 'A') {
        for(int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }

    if(c == 'D') {
        for(n; n > 0; n--) {
            printf("%d ", n);
        }
    }

    return 0;
}