// nomadcoders 쉽고 빠른 Go 시작하기 //
// 2.0 Account + NewAccount //

// struct 연습용 미니 프로젝트 //

package main

import (
	"fmt"

	"github.com/Esantomi/learngo/banking" // Go는 /go/src를 기본 경로로 한다.
)

// main
func main() {
	account := banking.Account{Owner: "kokam", Balance: 1000}
	fmt.Println(account)
}
