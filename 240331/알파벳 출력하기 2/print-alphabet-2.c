#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int Text = 65;

    for(int i = 0; i < n; i++) {
        for(int j = n; j > i; j--) {
            printf("%c ", Text);

            if(Text == 'Z') {
                Text = 65;
            }

            Text++;
        }

        printf("\n");

        for(int j = 0; j <= i; j++) {
            printf("  ");
        }
    }
    return 0;
}