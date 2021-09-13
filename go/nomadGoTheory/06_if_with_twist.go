// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.6 If with a Twist //

// if와 else if, else
// variable expression: if문 안에서 variable 선언. if문 안에서 쓰기 위해 생성하는 경우에 해당한다.

package main

import "fmt"

// 나이에 따라 음주가 가능한지 판단
func canIDrink(age int) bool {
	if koreanAge := age + 2; koreanAge < 18 { // variable expression (koreanAge). 할당을 if문 위로 빼도 된다.
		return false
	}
	return true // if가 return을 가지니 else를 넣어 주지 않아도 된다.
}

// if-else 기본 모양새
func canIDrink2(age int) bool {
	if age < 18 {
		return false
	} else {
		return true
	}
}

// main
func main() {
	fmt.Println(canIDrink(16))  // true
	fmt.Println(canIDrink2(16)) // false
}
