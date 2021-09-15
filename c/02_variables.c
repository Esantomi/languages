// 씹어먹는 C 언어 (modoocode.com)
// 3. 변수가 뭐지?

#include <stdio.h>
int main() {
    /* 진수 표현 */
    int a;
    a = 127;
    printf("a의 값은 %d진수로 %o입니다. \n", 8, a);
    printf("a의 값은 %d진수로 %d입니다. \n", 10, a);
    printf("a의 값은 %d진수로 %x입니다. \n", 16, a);

    /* float와 double */
    float b = 3.141592f;  // float임을 명시하기 위해 f를 붙임
    double c = 3.141592;
    printf("b : %f \n", b);
    printf("c : %f \n", c);

    /* %f는 실수 대입 필수 */
    printf("%f \n", 1);    // 3.141592 (이상한 값)
    printf("%f \n", 1.0);  // 1.000000

    /* printf formatting */
    int d = 123;
    printf("b : %.2f \n", b);   // b : 3.14 
    printf("d : %5d \n", d);    // d :   123
    printf("c : %6.3f \n", c);  // c :  3.142 

    return 0;
}