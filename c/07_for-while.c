// 씹어먹는 C 언어 (modoocode.com)
// 7. 뱅글 뱅글 (for, while)


// for 문 : {}를 조건식이 성립하는 동안 반복

#include <stdio.h>
int main() {
    /* 숫자 0부터 19까지 출력 */
    int i;
    for (i = 0; i < 20; i++) {
        printf("숫자 : %d \n", i);
    }

    /* 1부터 19까지의 합 */
    int sum = 0;
    for (i = 0; i < 20; ++i) {
        sum += i;
    }
    printf("1부터 19까지의 합 : %d \n", sum);  // 190

    /* for 문 응용 : 점수 평균 구하기 */
    int subject, score;
    double sum_score = 0;

    printf("과목이 총 몇 개예요? : ");
    scanf("%d", &subject);

    printf("\n 각 과목의 점수를 입력해 주세요! \n");
    for (i = 1; i <= subject; i++) {
        printf("과목 %d : ", i);
        scanf("%d", &score);
        sum_score += score;
    }
    printf("전체 과목 평균은 : %.2f \n", sum_score / subject);


    /* 이중 for 문 : 구구단 */
    // int i;
    int j;

    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            printf("%d x %d = %d \n", i, j, i * j);
        }
    }


    /* break 문 */
    int useranswer;

    printf("컴퓨터가 생각한 수를 맞춰 보세요! \n");

    // for문의 조건식이 명시되지 않으면 항상 참이 된다. (;만 2개 들어감)
    for (;;) {
        scanf("%d", &useranswer);

        if (useranswer == 3) {
            printf("맞췄습니다! \n");
            break;  // 조건식과 무관하게 실행되면 무조건 for문을 종료시킨다.
        } else {
            printf("다시 맞춰 보세요! \n");
        }
    }


    /* continue 문 */
    // break와 달리 for 문을 빠져나가는 게 아닌, PASS해 주는 역할

    /* 5의 배수를 제외한 숫자 출력 */
    // int i;

    for (i = 0; i < 100; i++) {
        if (i % 5 == 0) continue;  // 5의 배수면 실행 않고 패스
        printf("%d ", i);
    }


    /* while 문 */
    i = 1;
    sum = 0;  // 이미 위에서 선언함

    while (i <= 100) {
        sum += i;
        i++;
    }

    printf("1부터 100까지의 합 : %d \n", sum);  // 5050


    /* do-while 문 */

    // while 문은 명령 실행 전 조건식의 TF를 먼저 검사하고, 거짓이면 실행되지 않음
    // do-while 문은 명령을 실행한 뒤에 조건식을 검사하므로, 최소한 한 번은 실행되게 됨

    i = 1;
    sum = 0;

    do {
        sum += i;
        i++;
    } while (i < 1);

    printf("sum : %d \n", sum);  // 1

    return 0;
}