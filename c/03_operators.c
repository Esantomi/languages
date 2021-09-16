// 씹어먹는 C 언어 (modoocode.com)
// 4-1. 계산하리

#include <stdio.h>
int main() {
    /* 산술 연산자(arithmetic operators) */
    int a, b;
    double c;
    a = 10;
    b = 3;
    c = 3;

    /* 산술 연산자 */
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
    int d = 3;
    d = d + 3;
    printf("d의 값은 : %d \n", d);  // d의 값은 : 6

    /* 더하기 1을 하는 방법 */
    int d1, d2, d3, d4;
    d1 = d2 = d3 = d4 = 1;  // 대입 연산자 =는 우항부터 연산해서 가능한 식

    /* 대입 연산자 */
    d1 = d1 + 1;
    printf("d1 : %d \n", d1);  // d1 : 2
    /* 복합 대입 연산자(compound-) */
    d2 += 1;
    printf("d2 : %d \n", d2);  // d2 : 2
    /* 증감 연산자(increment-) ++ */
    ++d3;                      // 전위형(prefix) : 1을 더하고 결과 반환
    printf("d3 : %d \n", d3);  // d3 : 2
    d4++;                      // 후위형(postfix) : 결과 반환 후 1을 더함
    printf("d4 : %d \n", d4);  // d4 : 2

    /* 전위형과 후위형의 차이점 */
    int d5 = 1;
    printf("++d5 : %d \n", ++d5);  // ++d5 : 2

    d5 = 1;
    printf("d5++ : %d \n", d5++);  // d5++ : 1
    printf("d5 : %d \n", d5);      // d5 : 2

    return 0;
}