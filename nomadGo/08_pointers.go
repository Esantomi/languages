// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.8 Pointers! //

package main

import "fmt"

// 메모리에 접근해 주소, 주소에 저장된 값 등 조회 가능
// low-level programming을 가능하게 해 준다.

// main
func main() {
	a := 2
	b := a
	fmt.Println(a, b)
}
