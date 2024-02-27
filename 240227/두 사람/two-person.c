#include <stdio.h>

int main() {
    int age1, age2;
    char gender1, gender2;

    scanf("%d %c %d %c", &age1, &gender1, &age2, &gender2);

    if((age1 < 19 && age2 < 19) || (gender1 == 'W' && gender2 == 'W')) {
        printf("0");
    }
    else {
        printf("1");
    }

    return 0;
}