#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int Text = 65;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c", Text);
        }
        printf("\n");
    }
    
    return 0;
}