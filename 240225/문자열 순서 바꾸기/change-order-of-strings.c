#include <stdio.h>
#include<string.h>

int main() {
    char s[100];
    char t[100];
    char c[100];

    scanf("%s", s);
    scanf("%s", t);

    strcpy(c, s);
    strcpy(s, t);
    strcpy(t, c);

    printf("%s\n", s);
    printf("%s", t);

    return 0;
}