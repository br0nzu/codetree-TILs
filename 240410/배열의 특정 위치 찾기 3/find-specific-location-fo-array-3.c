#include <stdio.h>

int main() {
    int arr[100];
    int sum = 0;
    for(int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] == 0) {
            sum += arr[i - 1] + arr[i - 2] + arr[i - 3];
            break;
        }
    }

    printf("%d", sum);

    return 0;
}