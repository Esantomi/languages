// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.3 Functions part One //

package main

import (
	"fmt"
	"strings"
)

// 두 정수의 곱을 반환하는 함수
func multiply(a int, b int) int { // 매개변수 a, b의 type과 return type을 적어 줘야 한다.
	// 매개변수 a, b의 type을 한번에 지정할 수도 있다. e.g. multiply(a, b int) int
	return a * b
}

// str을 받아서 len과 upper를 반환하는 함수
func lenAndUpper(name string) (int, string) {
	return len(name), strings.ToUpper(name) // Go는 return 값을 여러 개 가질 수 있다.
}

// 여러 arguments를 받아 출력하는 함수
func repeatMe(words ...string) { // 인수(argument)가 여럿일 때 type 앞에 ...를 쓴다.
	// 출력값 type은 적지 않는다. (array로 나옴)
	fmt.Println(words) // array 형태로 출력

}

func main() {
	// 곱셈 반환
	fmt.Println(multiply(2, 2)) // 4

	// 문자열의 길이와 대문자 변환 결과를 반환
	fmt.Println(lenAndUpper("old tree")) // 8 OLD TREE // return이 2개(multiple value) 나온다.
	// totalLength, upperName := lenAndUpper("old tree")
	// fmt.Println(totalLength, upperName)

	// ignored value
	totalLength, _ := lenAndUpper("old tree") // _를 통해 compiler가 value를 무시하게 할 수 있다.
	fmt.Println(totalLength)                  // 8

	// 여러 arguments를 array로 출력
	repeatMe("ulleungdo", "jejudo", "gageodo", "heuksando", "dokdo") // [ulleungdo jejudo gageodo heuksando dokdo]
}
