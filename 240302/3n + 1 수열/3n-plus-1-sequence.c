#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;

    while(1) {
        if(n == 1) {
            printf("%d", cnt);
            break;
        }

        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3 + 1;
        }
        cnt++;
    }

    return 0;
}