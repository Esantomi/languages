// nomadcoders 쉽고 빠른 Go 시작하기 //
// 2.0 Account + NewAccount //

// struct 연습용 미니 프로젝트 //

package main

import (
	"github.com/Esantomi/nomadGoProjects/accounts"
	// Go는 /go를 기본 경로로 한다. (패키지 관리)
)

// main
func main() {
	account := accounts.NewAccount("kokam")
	// fmt.Println(account)
	// account.balance = 10000
	// balance는 Account struct의 private한 부분이므로 호출, 변경 불가
}

// func main() {
// 	account := banking.Account{Owner: "kokam", Balance: 1000} // banking 패키지에서 호출
// 	// account := banking.Account{Owner: "kokam"} // {kokam 0}
// 	fmt.Println(account) // {kokam 1000}
// }
