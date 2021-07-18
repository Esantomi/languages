// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.8 Pointers! //

package main

import "fmt"

// 메모리에 접근해 주소, 주소에 저장된 값 등 조회 가능
// low-level programming을 가능하게 해 준다.

// &: 포인터(pointer) 변수의 메모리 주소 전달
// *: 디리퍼런싱(dereferencing). 주소에 값을 쓸 때 사용
// *를 type 앞에 쓰면 parameter가 포인터임을 표시 (look through)
// e.g. func say(msg *string) {}:
// 이때의 msg는 string이 아닌 string을 갖는 메모리 주소

// main
func main() {
	// 값 복사
	a := 2
	b := a // 이 시점에서 a가 2였으므로 뒤에 a 값을 바꿔도 b는 계속 2이다.
	a = 10 // a 값 변경. b는 그대로 2이다.

	// 주소 복사
	aa := 2
	bb := &aa        // aa의 값 대신 주소 복사 후 bb에 할당
	fmt.Println(*bb) // 2
	aa = 10
	fmt.Println(*bb) // 10 (aa = 10 재할당 때문)
	// *bb는 bb의 값, bb의 값은 aa의 메모리 주소, 따라서 10

	fmt.Println(a, b)   // 10 2
	fmt.Println(&a, &b) // 0xc000016118 0xc000016140 (메모리 주소 다름)

	fmt.Println(aa, bb)  // 10 0xc000016148
	fmt.Println(&aa, bb) // 0xc000016148 0xc000016148 (주소가 동일함)
}
