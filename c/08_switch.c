// 씹어먹는 C 언어 (modoocode.com)
// 8. 만약에... 2탄 (switch 문)


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
    char input;

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