// main은 entry point라 compiler는 파일명이 main인 것을 찾아내 compile한다 //
// 따라서 compile해야 한다면 파일명은 반드시 main.go로 해야 한다. //
// 라이브러리 구축 등이 목적이라면 main.go로 파일명을 정할 필요가 없다. //

package main // main 패키지 사용

import "fmt"

func main() {
	const const_name string = "ulleungdo" // 상수 선언. type을 상수명 뒤에 써 줘야 한다.
	// name = "jejudo"                 // 상수(constant) 값은 변경이 불가능(cannot assign)하다.
	fmt.Println(const_name)

	var var_name string = "ulleungdo" // 변수 선언
	var_name = "jejudo"               // 변수 값은 변경이 가능하다. (같은 type으로만)
	fmt.Println(var_name)             // jejudo가 나온다.

	name := "much more easy way to assign." // var name string = "much ~ assign"과 동일하다.
	fmt.Println(name)

	// 이러한 short hand way는 func 안에서만 사용 가능하며 변수에만 사용 가능하다.
	// type은 Go가 알아서 찾아준다. (첫 번째로 정해진 type은 이후 변경이 불가능하다.)
}
