#include <stdio.h>

int main() {
    int age;
    int sum = 0, cnt = 0;
    
    while(1) {
        scanf("%d", &age);
        
        if(age < 20 || age >= 30) {
            double average = (double)sum / cnt;
            printf("%.2lf", average);
            break;
        }
        
        sum += age;
        cnt++;

    }
    return 0;
}