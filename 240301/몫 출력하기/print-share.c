#include <stdio.h>

int main() {
    int n;
    int cnt = 0;


    while(1) {
        scanf("%d", &n);

        if(cnt == 3) {
            break;
        }

        if(n % 2 == 0) {
            printf("%d\n", n / 2);
            cnt++;
        }
    }
    return 0;
}