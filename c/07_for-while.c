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

    return 0;
}