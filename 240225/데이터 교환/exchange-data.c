#include <stdio.h>

/*
int main() {
    
    int a = 5, b = 6, c = 7, temp1 = 0, temp2 = 0;
    temp1 = b;
    temp2 = c;
    b = a;
    c = temp1;
    a = temp2;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", c);

    return 0;
}
*/

int main() {
    // 변수 선언
    int a = 5, b = 6, c = 7;
	
	// 교체
	int temp = a;
	a = c;
    c = b;
	b = temp;
    
    // 출력
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}