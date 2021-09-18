// 씹어먹는 C 언어 (modoocode.com)
// 5. 문자 입력받기


/* scanf : 화면(키보드)로부터 결과를 받아들이는 입력 합수 */

#include <stdio.h>
int main() {
    /* 문자를 저장하는 변수 */
    char a;
    a = 'a';

    /* 컴퓨터는 문자-숫자를 1:1 대응으로 보므로, ASCII에 따라 a는 97이 된다. */
    printf("a에 든 문자는? 값 : %d, 문자 : %c \n", a, a);  // 97, a


    /* 섭씨 온도를 화씨 온도로 바꾸기 */
    double celsius;

    printf("섭씨 온도를 화씨 온도로 바꿔 주는 프로그램입니다. \n");
    printf("섭씨 온도를 입력해 주세요 : ");
    scanf("%lf", &celsius);  // 입력 값을 long float(double)로 받아 celsius에 주소 전달

    printf("섭씨 %f도는 화씨로 %f도입니다. \n", celsius, celsius * 9 / 5 + 32);  // scanf는 printf보다 type에 엄격하다.


    /* scanf 총정리 */
    /* 문자 */
    char ch;

    /* 정수 */
    short sh;
    int i;
    long lo;

    /* 실수 */
    float fl;
    double du;

    /* scanf의 format 문자는 type마다 다르다. */
    printf("char형 변수 입력 : ");
    scanf("%c", &ch);

    printf("short형 변수 입력 : ");
    scanf("%hd", &sh);
    printf("int형 변수 입력 : ");
    scanf("%d", &i);
    printf("long형 변수 입력 : ");
    scanf("%ld", &lo);

    printf("float형 변수 입력 : ");
    scanf("%f", &fl);
    printf("double형 변수 입력 : ");
    scanf("%lf", &du);

    /* printf의 format 문자는 좀 더 호환적이다. (정수는 %d, 실수는 %f) */
    printf("char : %c, short : %d, int : %d", ch, sh, i);
    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);

    return 0;
}