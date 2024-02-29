#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int ni;
        scanf("%d", &ni);
        
        if(ni % 2 != 0 && ni % 3 == 0) {
            printf("%d\n", ni);
        }
    }

    return 0;
}