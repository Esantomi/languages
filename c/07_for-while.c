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

    return 0;
}