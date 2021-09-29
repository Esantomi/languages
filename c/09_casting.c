// 씹어먹는 C 언어 (modoocode.com)
// 9. 연예인 캐스팅(?) (C 언어에서의 형 변환)


/* 형 변환 */
#include <stdio.h>
int main() {
    int a;
    double b;

    b = 2.4;
    a = (int)b;  // '(type)variable'로 casting한다.

    printf("%d", a);
}
