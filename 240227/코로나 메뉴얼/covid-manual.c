#include <stdio.h>

int main() {
    char dis1, dis2, dis3;
    int temp1, temp2, temp3;
    scanf("%c %d", &dis1, &temp1);
    scanf("%c %d", &dis2, &temp2);
    scanf("%c %d", &dis3, &temp3);

    if((dis1 == 'Y' && temp1 >= 37) && (dis2 == 'Y' && temp2 >= 37)) {
        printf("E");
    }
    else if((dis2 == 'Y' && temp2 >= 37) && (dis3 == 'Y' && temp3 >= 37)) {
        printf("E");
    }
    else if((dis1 == 'Y' && temp1 >= 37) && (dis3 == 'Y' && temp3 >= 37)) {
        printf("E");
    }
    else {
        printf("N");
    }

    return 0;
}