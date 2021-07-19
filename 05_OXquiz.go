// OX Quiz //

// https://www.acmicpc.net/problem/8958 //
// 문제 : "OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
// 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
// "OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
// OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

// 입력 : 첫째 줄에 테스트 케이스의 개수가 주어진다.
// 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.

// 출력 : 각 테스트 케이스마다 점수를 출력한다.

// 내 코드
package main

import (
	"fmt"
	"strings"
)

func main() {

	var 입력 string

	fmt.Print("퀴즈 결과를 입력하세요(예: OXOO): ")
	fmt.Scanf("%s", &입력)

	input_slice := strings.Split(입력, "X") // OOXOXOOOX
	// fmt.Println(input_slice)              // [OO O OOO ]
	// fmt.Println(len(input_slice))         // 3
	// fmt.Println(cap(input_slice))         // 3

	// fmt.Println(input_slice[0])           // OO
	// fmt.Println(input_slice[1])           // O
	// fmt.Println(input_slice[2])           // OOO
	// fmt.Println(input_slice[3])           //

	score := 0
	for _, o := range input_slice {
		length_o := len(o) // X로 나눈 O 연속체 각각의 길이
		// 삼각수의 합 공식
		score_piece := length_o * (length_o + 1) / 2 // O 연속체 각각의 점수
		score += score_piece                         // 전체 점수
	}
	println(score) // 점수 출력
	return
}

// 이예희님 코드 //
// package main

// import "fmt"

// func main() {
// 	const O, X int = 79, 88

// 	var c int
// 	fmt.Scan(&c) // 테스트 케이스 개수를 받는다.

// 	var arr []string = make([]string, c)
// 	var score []int = make([]int, c)

// 	for idx := range arr {
// 		fmt.Scan(&arr[idx])
// 		score[idx] = 0
// 		var temp int = 0
// 		for i := range arr[idx] {
// 			if int(arr[idx][i]) == O {
// 				temp += 1
// 				score[idx] += temp
// 			} else {
// 				temp = 0
// 			}
// 		}
// 		println(score[idx])
// 	}
// }

// 조현성님 코드 //
// package main

// import (
// 	"fmt"
// 	"regexp"
// )

// var 한덩이 string = `
// 5
// oxOOXXOXXOOO
// ooxxOXXOOXXOO
// oooXOXOXOXOXOXOX
// OOOOxOOOOOO
// oooooXOOOOXOOOOXx
// `

// var pp = fmt.Println // 일일히 fmt.Printlm 치는 게 귀찮아서
// var 점수표 = [80]int{}  // 문자열이 80보다 짧다니까 이거면 충분

// func main() {
// 	fmt.Println(한덩이)
// 	여러줄 := regexp.MustCompile("\n+").Split(한덩이, -1)
// 	여러줄 = 여러줄[2 : len(여러줄)-1]

// 	일이삼, 일삼육십 := 0, 0

// 	for kk := range [10]int{} { // 이건 대체 무슨 요술?
// 		// kk 가 0 1 2 3 4 5...
// 		일삼육십 += kk
// 		점수표[일이삼] = 일삼육십
// 		일이삼++
// 	}

// 	for ii, 한줄 := range 여러줄 {
// 		fmt.Printf("%d) ", ii+1)
// 		pp(한줄)
// 		점수계산(한줄)
// 	}
// }

// func 점수계산(문자열 string) (합 int) {
// 	// 조각z := regexp.MustCompile("(?i)x+").Split(문자열1, -1)
// 	조각z := regexp.MustCompile("(x|X)+").Split(문자열, -1)

// 	for _, 한조각 := range 조각z {
// 		조각길이 := len(한조각)
// 		if 조각길이 > 0 {
// 			pp(한조각, 점수표[조각길이])
// 			합 += 점수표[조각길이]
// 		}
// 	}
// 	pp("총점:", 합, "\n")
// 	return
// }
