// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.7 switch //

package main

import "fmt"

// if, else if 난무 방지에 도움이 된다.

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

// switch {}
func canIDrink4(age int) bool {
	switch { // swtich만 쓰고 case에서 조건 비교
	case age < 18:
		return false
	case age == 18:
		return true
	case age > 50:
		return false
	}
	return false
}

// switch variable_expression {}
func canIDrink5(age int) bool {
	switch koreanAge := age + 2; koreanAge { // variable expression
	case 10:
		return false
	case 18:
		return true
	}
	return false
}

// main
func main() {
	fmt.Println(canIDrink3(18)) // true
	fmt.Println(canIDrink3(16)) // false
	fmt.Println(canIDrink4(18)) // true
	fmt.Println(canIDrink4(16)) // false
	fmt.Println(canIDrink5(18)) // false
	fmt.Println(canIDrink5(16)) // true
}
