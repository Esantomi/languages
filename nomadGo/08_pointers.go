// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.8 Pointers! //

package main

import "fmt"

// low-level programming

// switch 변수 {}
func canIDrink3(age int) bool {
	switch age { // 변수 age에 대해 조건 비교
	case 10: // age가 10인 경우
		return false
	case 18: // age가 18인 경우
		return true
	}
	return false // case에 해당 사항이 없는 경우
}

// main
func main() {
	fmt.Println(canIDrink3(18)) // true
	fmt.Println(canIDrink3(16)) // false
}
