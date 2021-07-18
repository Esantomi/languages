package something

import "fmt"

func sayBye() { // 소문자로 시작하는 함수. export 불가능.
	fmt.Println("Bye")
}

func SayHello() { // 대문자로 시작하는 함수. export 가능
	fmt.Println("Hello")
}
