// 씹어먹는 C 언어 (modoocode.com)
// 3. 변수가 뭐지?

#include <stdio.h>
int main() {
    int a, b;
    double c;
    a = 10;
    b = 3;
    // a = b = 5; 형식도 가능함
    c = 3;

    /* 산술 연산자(arithmetic operators) */
    printf("a + b는 : %d \n", a + b);   // 13
    printf("a - b는 : %d \n", a - b);   // 7
    printf("a * b는 : %d \n", a * b);   // 30
    printf("a / b는 : %d \n", a / b);   // 3
    printf("a %% b는 : %d \n", a % b);  // 1 (%%는 escape 문자)
    // printf("a / b는 : %f \n", a / b);  // 0.000000 (a와 b는 int인데 %f를 썼으므로 오류 발생)

    /* 산술 변환 : 자료형이 다른 두 변수 연산 시, 범위가 더 큰 자료형으로 type들이 바뀐다. */
    printf("a / c는 : %f \n", a / c);  // 3.333333
    printf("c / a는 : %f \n", c / a);  // 0.300000
    // a는 int, c는 double이지만 산술 변환으로 a가 double로 바뀌고 결괏값도 double로 바뀌었다.

    /* 대입 연산자(assignment operator) */

    return 0;
}