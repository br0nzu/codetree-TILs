#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    
    bool condition = true;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &n);

        if(n % 3 != 0) {
            condition = false;
        }
    }

    if(condition == true) {
        printf("1");
    }
    else {
        printf("0");
    }
    
    return 0;
}