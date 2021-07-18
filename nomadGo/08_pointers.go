// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.8 Pointers! //

package main

import "fmt"

// 메모리에 접근해 주소, 주소에 저장된 값 등 조회 가능
// low-level programming을 가능하게 해 준다.

// &: 변수의 메모리 주소(address) 전달 (e.g. 0xc00018c008)
// *(ampersand) = 주소(address)의 값을 see through
// *주소 = 값: 디리퍼런싱(dereferencing). 주소에 직접 값을 쓸 때 사용 (아래 참고)

// *를 type 앞에 쓰면 parameter가 포인터임을 표시 (e.g. func say(msg *string) {})
// 위의 예시에서 msg는 string이 아닌 string을 갖는 메모리 주소가 된다.

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
	// *bb는 bb의 값(look through), bb의 값은 aa의 메모리 주소, 따라서 10

	// dereferencing
	*bb = 20        // bb를 look through하면 aa의 주소
	fmt.Println(aa) // 20 (aa의 주소를 dereferencing 했으므로)

	// 값들 출력 및 조회
	fmt.Println(a, b)   // 10 2
	fmt.Println(&a, &b) // 0xc000016118 0xc000016140 (메모리 주소 다름)

	fmt.Println(aa, bb)  // 10 0xc000016148
	fmt.Println(&aa, bb) // 0xc000016148 0xc000016148 (주소가 동일함)
}

// 정리 //
// &(ampersand): 주소(address) 반환
// *: 주소에 저장된 값 반환 (dereferencing: 변경도 가능)
