#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    
    for(int i = 0; i <= n; i++) {
        if(i % 12 == 0) {
            cnt3++;
        }
        else if(i % 6 == 0 || i % 3 == 0) {
            cnt2++;
        }
        else if(i % 2 == 0) {
            cnt1++;
        }
    }

    printf("%d %d %d", cnt1, cnt2, cnt3 - 1);

    return 0;
}