// if문 //

package main

import "fmt"

func main() {

	var score int

	fmt.Println("시험 점수를 입력하세요: ")
	fmt.Scanf("%d", &score)

	if score >= 90 {
		println("A")
	} else if score >= 80 {
		println("B")
	} else if score >= 70 {
		println("C")
	} else if score >= 60 {
		println("D")
	} else {
		println("F")
	}
}
