// 씹어먹는 C 언어 (modoocode.com)
// 6. 만약에...(if 문)


// 비교(관계) 연산자 : >, <, >=, <=, ==, !=

#include <stdio.h>
int main() {
    /* if-else 문 */
    int num;

    printf("아무 숫자나 입력하세요! : ");
    scanf("%d", &num);

    if (num == 7) {
        printf("행운의 숫자 7을 입력했네요! \n");
    } else if (num == 4) {
        printf("죽음의 숫자 4네요! \n");
    } else {
        printf("보통 숫자인 %d를 입력했네요! \n", num);
    }

    /* 나눗셈 예제 */
    double i, j;
    printf("나눌 두 정수를 입력하세요! : ");
    scanf("%lf %lf", &i, &j);

    if (j == 0) {
        printf("0으로 나누면 inf가 출력됩니다. \n");
        return 0;
    }

    printf("%f를 %f로 나눈 값은 : %f \n", i, j, i / j);

    return 0;
}