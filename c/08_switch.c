// 씹어먹는 C 언어 (modoocode.com)
// 8. 만약에... 2탄 (switch 문)


/* if-else와 switch 내부 로직 차이 */

// if ... else if ... else if ... else는 총 3번 비교한다. (else는 비교 없는 자동 처리)
// 즉 if 문은 CMP 연산(어셈블리 compare)을 모든 case에 대해 시행할 수 있다.

// switch는 jump table을 생성하는데, table의 각 값은 case 별 명령어 주소를 가리킨다.
// 따라서 switch를 쓰면 case에 따라 CMP 연산이 느는 게 아닌, jump table의 크기만 커지고 성능에는 영향이 없다.


#include <stdio.h>
int main() {
    /* 귀여운 꼬깜이 */
    int input;

    printf("귀여운 꼬깜이 \n");
    printf("뭘 해 줄 건가요? \n");
    printf("1. 밥 주기 \n");
    printf("2. 씻기기 \n");
    printf("3. 사과 주기 \n");

    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("냠냐미! \n");
        break;
    
    case 2:
        printf("앙 찌요! \n");
        break;

    case 3:
        printf("신나~~! 냠냠냠냠냠냠냠냐먐냐냠ㄴㅑㅁ \n");
        break;

    default:
        printf("꼬깜이는 바보라서 그 명령은 몰라요!");
        break;
    }


    /* 알파벳을 읽어요 */
    char input;  // 컴퓨터는 문자를 모두 숫자로 처리, 보여 줄 때만 문자로 보여 주므로 '문자 = 정수'라 봐도 무방함

    printf("알파벳 소문자 읽기 \n");
    printf("알파벳 : ");

    scanf("%c", &input);

    switch (input)
    {
    case 'a':
        printf("에이 \n");
        break;
    
    case 'b':
        printf("비 \n");
        break;

    case 'c':
        printf("씨 \n");
        break;

    default:
        printf("C 밑으로 받으면 곤란합니다. \n");
        break;
    }

    return 0;
}