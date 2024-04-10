#include <stdio.h>

int main() {
    int arr[10];
    int sum_odd = 0, sum_even = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d ", &arr[i]);

        if(i % 2 == 0) {
            sum_odd += arr[i];
        }
        else {
            sum_even += arr[i];
        }
    }

    if(sum_odd > sum_even) {
        printf("%d", sum_odd - sum_even);
    }
    else if(sum_odd < sum_even) {
        printf("%d", sum_even - sum_odd);
    }
    else {
        printf("0");
    }

    return 0;
}