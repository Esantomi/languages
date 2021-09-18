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

    printf("섭씨 %f도는 화씨로 %f도입니다. \n", celsius, celsius * 9 / 5 + 32);

    return 0;
}