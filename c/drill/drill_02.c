// 씹어먹는 C 언어 (modoocode.com)
// 7. 뱅글 뱅글 (for, while)


// 문제 2 (난이도 : 中上)
/* 위와 동일한 형태를 취하되, 역 삼각형을 출력한다. 아래는 N = 3 일 때의 출력 예시 이다.

*****
 ***
  *

 */

#include <stdio.h>
int main() {
    int line, i, j, k;

    printf("몇 줄짜리 역삼각형을 만드실래요? : ");
    scanf("%d", &line);

    if (line <= 2) {
        printf("최소 3줄 이상으로 합시다!");
        } else {
            for (i = 1; i <= line; i++) {
                /* 공백 부분 */
                for (j = 2; j <= i; j++) {
                    printf(" ");
                }

                /* 별(*) 부분 */
                for (k = 1; k <= 2 * (line - i) + 1; k++) {
                    printf("*");
                }

                /* 줄 바꿈 */
                printf("\n");
            } 
        }
}