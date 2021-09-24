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

    return 0;
}