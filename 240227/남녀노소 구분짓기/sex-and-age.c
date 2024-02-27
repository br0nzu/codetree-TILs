#include <stdio.h>

int main() {
    int gender, age;
    scanf("%d %d", &gender, &age);

    if(gender == 0) {
        if(age < 19) {
            printf("BOY");
        }
        else {
            printf("MAN");
        }
    }
    else {
        if(age < 19) {
            printf("GIRL");
        }
        else {
            printf("WOMAN");
        }
    }
    
    return 0;
}