// 씹어먹는 C 언어 (modoocode.com)
// 6. 만약에...(if 문)


// 비교(관계) 연산자 : >, <, >=, <=, ==, !=
// 논리 연산자 : &, &&, ||, !
// Short circuit evaluation(SCE) : 한 조건을 확인했는데 전체 결과가 정해져 있다면, 뒤의 조건을 확인하지 않는 것

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


    /* 평균 점수 예제 */
    float ave_score;
    float math, english, science, programming;

    printf("수학, 영어, 과학, 프로그래밍 점수를 각각 입력해 주세요 : ");
    scanf("%f %f %f %f", &math, &english, &science, &programming);

    ave_score = (math + english + science + programming) / 4;  // 평균 점수
    printf("당신의 평균 점수는 %f입니다. \n", ave_score);

    if (ave_score >= 90) {
        printf("우등생이시네요. \n");
    } else if (ave_score >= 40) {
        printf("좀 더 노력합시다. \n");
    } else {
        printf("공부를 안 하시네요. \n");
    }


    /* 논리 연산자(logical operators) */

    // & : 비트 사이의 AND 연산. 정확한 연산 결과를 제공해야 하므로 SCE 적용 불가
    // 논리 곱 연산자(&&) : 참(1) 혹은 거짓(0)만 반환. 조건식 사이의 관계 표현에 사용 (SCE 적용 가능)

    int a = 31, b = 15;
    printf("a & b = %d \n", a & b);    // 15
    printf("a && b = %d \n", a && b);  // 1

    // 논리 합 연산자(||) : OR 연산
    // 논리 부정 연산자(!) : NOT 연산. 0을 1로, 1을 0으로 반전시켜 준다.

    int height, weight;
    printf("키와 몸무게를 입력해 주세요 : ");
    scanf("%d %d", &height, &weight);

    if (height >= 190 || weight >= 100) {
        printf("당신은 거구입니다. \n");
    }
    if (!(height >= 190 || weight >= 100)) {  // 190 이상, 100 이상이 아니라면
        printf("당신은 거구가 아닙니다. \n");
    }

    return 0;
}