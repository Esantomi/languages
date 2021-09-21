// 씹어먹는 C 언어 (modoocode.com)
// 7. 뱅글 뱅글 (for, while)


// 문제 1 (난이도 : 中)
/* N 줄인 삼각형을 출력한다. 단, 사용자로 부터 임의의 N 을 입력 받는다. 아래는 N = 3 일 때의 출력 예시 이다.

  *
 ***
*****

*/

#include <stdio.h>
int main() {
    int i, j, k, line;

    printf("몇 줄짜리 삼각형을 만들 건가요? : ");
    scanf("%d", &line);

    if (line <= 1) {
        printf("최소 2 이상으로 입력해 주세요.");
        return 0;
    } else {
        for (i = 1; i <= line; i++) {
            /* 공백 부분 */
            for (j = 1; j <= line - i; j++) {  // 줄 수 - 1, 줄 수 - 2, 줄 수 - 3 ...
                printf(" ");
            }

            /* 별(*) 부분 */
            for (k = 1; k <= 2 * i - 1; k++) {  // 1, 3, 5, 7 ...
                printf("*");
            }

            /* 줄 바꿈 */
            printf("\n");
        }
    }
    return 0;
}