#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i % 2 == 0) {
                printf("%d", cnt);
                if(cnt == n) {
                    cnt--;
                }
                cnt++;
            }
            else {
              printf("%d", cnt);
              if(cnt == 1) {
                cnt++;
              }
              cnt--;  
            }
        }
        printf("\n");
    }
    return 0;
}