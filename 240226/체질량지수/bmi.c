#include <stdio.h>

int main() {
    int height, weight;
    scanf("%d %d", &height, &weight);
    weight *= 10000;

    int BMI = weight / (height * height);

    if ( BMI >= 25 ) {
        printf("%d\n", BMI);
        printf("Obesity");
    }
    else {
        printf("%d", BMI);
    }

    return 0;
}