// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.10 Maps //

// 이름 := map[key_type]value_type{"key1":"value1", ...}
// value type을 string으로 주면 value는 string만 넣어야 한다.
// 여러 type의 값을 원한다면 struct를 써야 한다.

package main

import "fmt"

// main
func main() {
	kokam := map[string]string{"name": "kokam", "age": "2"}
	fmt.Println(kokam) // map[age:2 name:kokam]
}
