// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.9 Arrays and Slices //

// array //
// 이름 := [길이]타입{"값1", "값2", ...}

// Go에서는 array의 길이를 명시해 줘야 한다.
// 길이만큼의 값만 넣을 수 있다. (5면 5개)

package main

import "fmt"

// main
func main() {
	names := [5]string{"ulleungdo", "dokdo", "jejudo"} // 길이 5
	names[3] = "do"
	fmt.Println(names)
}
