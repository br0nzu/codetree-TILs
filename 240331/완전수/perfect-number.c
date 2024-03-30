#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    int cnt = 0;

    for(start; start <= end; start++) {
        int sum = 0;

        for(int i = 1; i < start; i++) {
            if(start % i == 0) {
                sum += i;
            }    
        }

        if(start == sum) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}