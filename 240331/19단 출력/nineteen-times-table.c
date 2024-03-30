#include <stdio.h>

int main() {
    int cnt = 1;
    for(int i = 1; i <= 19; i++) {
        for(int j = 1; j <= 19; j++) {
            printf("%d * %d = %d ", i, j, i * j);
            
            if(cnt % 2 != 0 && cnt != 19) {
                printf("/ ");
            }
            
            if(cnt % 2 == 0 || cnt == 19) {
                printf("\n");
            }
            
            if(cnt == 19) {
                cnt = 0;
            }
            
            cnt++;
        }
    }
    return 0;
}