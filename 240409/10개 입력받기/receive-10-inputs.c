#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0, cnt = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        
        if(arr[i] == 0) {
            break;
        }
        else {
            sum += arr[i];
            cnt++;
        }
    }

    printf("%d %.1lf", sum, (double)sum / cnt);

    return 0;
}