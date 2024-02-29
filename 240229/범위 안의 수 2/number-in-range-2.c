#include <stdio.h>

int main() {
    int n;
    int sum = 0, cnt = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &n);
        
        if(n >= 0 && n <= 200) {
            sum += n;
            cnt++;
        }
    }

    double average = (double)sum / cnt;

    printf("%d %.1lf", sum, average);
    
    return 0;
}