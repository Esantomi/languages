// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.11 Structs //

// structs //
// map과 비슷하지만 map보다 유연하다.
// 먼저 struct를 정의해 줘야 한다.
// format: type 이름 struct {}

package main

import "fmt"

type pet struct { // 'pet' struct 정의
	name    string
	age     int
	favFood []string // slice
}

// main
func main() {
	// struct에 value를 주는 방법은 2가지 있다.
	// 1. {} 안에 value만 순서대로 적어 주는 방법
	// 2. {} 안에 key:value 형태로 적어 주는 방법

	favFood := []string{"natural formula", "apple"}
	kokam := pet{name: "kokam", age: 2, favFood: favFood} // key를 써 주는 게 clear하다.
	// kokam := pet{"kokam", 2, favFood}                     // 이 방식은 clear하지 않다. (struct 선언도 봐야 함)
	fmt.Println(kokam)      // {kokam 2 [natural formula apple]}
	fmt.Println(kokam.name) // kokam
}
