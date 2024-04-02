#include <stdio.h>

int main() {
    
    int start, end;
    scanf("%d %d", &start, &end);

    int sum = 0;

    for(start; start <= end; start++) {
        int cnt = 0;

        for(int i = 1; i < start; i++) {
            if(start % i == 0) {
                cnt++;
            }
        }

        if(cnt == 3) {
            sum++;
        }
    }

    printf("%d", sum);

    return 0;
}