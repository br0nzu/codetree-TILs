#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int sum = 0;

        for(a; a <= b; a++) {
            

            if(a % 2 == 0) {
                sum += a;
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}