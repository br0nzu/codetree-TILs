#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    
    int grade = score < 100 ? 1 : 0;

    if (grade == 0) {
        printf("pass");
    }
    else {
        printf("failure");
    }

    return 0;
}