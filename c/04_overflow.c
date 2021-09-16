// 씹어먹는 C 언어 (modoocode.com)
// 4-2. 컴퓨터가 수를 표현하는 방법 (2의 보수)

#include <stdio.h>
int main() {
    /* 할당된 데이터가 타입의 크기(size)를 초과하면? */
    int a = 2147483647;      // int는 -2147483647 ~ 2147483647 까지의 정수 값을 보관
    printf("a : %d \n", a);  // a : 2147483647

    a++;
    printf("a : %d \n", a);  // a : -2147483647

    return 0;
}