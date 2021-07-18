// nomadcoders 쉽고 빠른 Go 시작하기 //
// 1.9 Arrays and Slices //

// array //
// 이름 := [길이]타입{"값1", "값2", ...}
// Go에서는 array의 길이를 명시해 줘야 한다.
// 길이만큼의 값만 넣을 수 있다. (5면 5개)

// slice //
// 길이 제한 없이 요소 추가 가능한 array
// 이름 := []타입{"값1", "값2", ...}
// slice에 값을 추가하려면 append()를 사용 (e.g. append(slice, value))
// append()는 slice와 value를 받아 새로운 slice를 return함 (비파괴적 함수)

package main

import "fmt"

// main
func main() {
	n_array := [5]string{"ulleungdo", "dokdo", "jejudo"} // 길이 5
	n_array[3] = "do"                                    // zero-based index이므로 3
	n_array[4] = "do"
	// n_array[5] = "do" // 길이가 5이므로 오류
	fmt.Println(n_array)

	n_slice := []string{"ulleungdo", "dokdo", "jejudo"} // [] 비우면 끝
	n_slice = append(n_slice, "do")
	fmt.Println(n_slice)
}
