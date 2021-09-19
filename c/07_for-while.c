// 씹어먹는 C 언어 (modoocode.com)
// 6. 만약에...(if 문)


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

    return 0;
}