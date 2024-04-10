#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    double average = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if(i % 2 != 0) {
            sum += arr[i];
        }
    }

    average = (arr[2] + arr[5] + arr[8]) / 3.0;

    printf("%d %.1lf", sum, average);

    return 0;
}