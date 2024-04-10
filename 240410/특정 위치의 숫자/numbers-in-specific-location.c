#include <stdio.h>

int main() {
    int arr[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int add = arr[2] + arr[4] + arr[9];

    printf("%d", add);
    
    return 0;
}