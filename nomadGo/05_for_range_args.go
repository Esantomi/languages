// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.5 Ffor, range, ...args //

// Go의 loop는 for로만 실현된다.
// range: array에 loop를 적용할 수 있게 해 주며 for문 안에서만 사용할 수 있다.
// range는 index를 함께 준다.

package main

import "fmt"

// for와 range
func superAdd(numbers ...int) int { // 여러 int arguments를 받는다.
	// range 사용 loop
	for idx, number := range numbers {
		fmt.Println(idx, number)
	}

	// ignored value (function1 참고)
	// for _, number := range numbers {
	// 	fmt.Println()
	// }

	return 1 // return type이 int이기 때문
}

// range 없는 loop
func superAdd2(numbers ...int) int {
	for i := 0; i < len(numbers); i++ {
		fmt.Println(numbers[i])
	}
	return 1
}

//
func superAdd3(numbers, ...int) int {
	total := 0
	for _, number := range numbers {
		total += number
	}
	return total
}

// main
func main() {
	superAdd(1, 2, 3, 4, 5, 6)
	superAdd2(1, 2, 3, 4, 5, 6)
	result := superAdd3(1, 2, 3, 4, 5, 6)
	fmt.Println(result)
}
