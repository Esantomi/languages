// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.5 Ffor, range, ...args //

// Go의 loop는 for로만 실현된다.
// range: array에 loop를 적용할 수 있게 해 준다.
// range는 index를 함께 준다.

package main

import "fmt"

// for와 range
func superAdd(numbers ...int) int { // 여러 int arguments를 받는다.
	// range 사용 loop
	for idx, number := range numbers {
		fmt.Println(idx, number)
	}
	// 다른 방식 loop
	for i := 0; i < len(numbers); i++ {
		fmt.Println(numbers[i])
	}
	return 1 // return type이 int이기 때문
}

// main
func main() {
	superAdd(1, 2, 3, 4, 5, 6)
}
