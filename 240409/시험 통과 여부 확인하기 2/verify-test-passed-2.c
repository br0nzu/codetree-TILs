#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;

    for(int i = 0; i < n; i++) {
        int arr[4] = { 0, };
        int sum = 0;

        for(int j = 0; j < 4; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }

        int average = sum / 4;

        if(average >= 60) {
            printf("pass\n");
            cnt++;
        }
        else {
            printf("fail\n");
        }
    }

    printf("%d", cnt);

    return 0;
}