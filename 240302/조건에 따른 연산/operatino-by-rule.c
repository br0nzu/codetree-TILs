#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;

    while(1) {
        if(n % 2 == 0) {
            n = n * 3 + 1;
        }
        else {
            n = n * 2 + 2;
        }
        cnt++;

        if(n >= 1000) {
            printf("%d", cnt);
            break;
        }
    }

    return 0;
}