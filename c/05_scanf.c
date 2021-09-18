// 씹어먹는 C 언어 (modoocode.com)
// 4-2. 컴퓨터가 수를 표현하는 방법 (2의 보수)


#include <stdio.h>
int main() {
    /* 문자를 저장하는 변수 */
    char a;
    a = 'a';

    /* 컴퓨터는 문자-숫자를 1:1 대응으로 보므로, ASCII에 따라 a는 97이 된다. */
    printf("a에 든 문자는? 값 : %d, 문자 : %c", a, a);  // 97, a

    return 0;
}