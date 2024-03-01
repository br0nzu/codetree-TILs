#include <stdio.h>

int main() {
    int n;
    int cnt = 0;


    while(cnt < 3) {
        scanf("%d", &n);

        if(n % 2 == 0) {
            printf("%d\n", n / 2);
            cnt++;
        }
    }
    return 0;
}