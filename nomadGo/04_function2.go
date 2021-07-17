// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.4 Functions part Two //

package main

import (
	"fmt"
	"strings"
)

// 기존의 함수: naked 형식으로 변환 가능
// func lenAndUpper(name string) (int, string) {
// 	return len(name), strings.ToUpper(name)

// naked return
func lenAndUpper(name string) (length int, uppercase string) {
	// defer는 function이 끝났을 때 추가적인 동작을 실행하게 할 수 있다.
	defer fmt.Println("Let's go!") // defer

	// length는 바로 윗줄에서 이미 생성됐으므로 := 대신 =를 써서 값을 갱신해 준다.
	length = len(name)
	uppercase = strings.ToUpper(name)

	return
	// naked return: 최상단에서 return을 명시해 줬으므로 (length int, uppercase string) return만 써도 된다.
	// Go가 최상단의 return 값들을 자동으로 찾아 준다.
	// 물론 return length, uppercase로 써도 문제는 없다.
}

// main
func main() {
	totalLength, up := lenAndUpper("ulleungdo")
	fmt.Println(totalLength, up) // 9 ULLEUNGDO
}
