#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 ==0) {
            cnt++;
        }
    }

    printf("%d", n - cnt);

    return 0;
}