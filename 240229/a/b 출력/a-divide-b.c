#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c = (a * 10) % b;
    int d = (a * 10) / b; 

    printf("0.");

    for(int i = 1; i <= 20; i++) {
        printf("%d", d);
        c = (c * 10) % b;
        d = (c * 10) % b;
    }

    return 0;

}