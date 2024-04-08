#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double arr[n];
    double sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    double average = sum / n;

    if(average >= 4.0) {
        printf("%.1lf\n", average);
        printf("Perfect");
    }
    else if(average >= 3.0) {
        printf("%.1lf\n", average);
        printf("Good");
    }
    else {
        printf("%.1lf\n", average);
        printf("Poor");
    }

    return 0;
}