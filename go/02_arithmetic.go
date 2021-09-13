// 사칙 연산 //
// https://www.acmicpc.net/problem/10869 //

package main

import "fmt"

func main() {
	var A int
	var B int

	fmt.Print("두 자연수 A, B를 입력하시오: ")
	fmt.Scanf("%d %d", &A, &B)
	fmt.Println(A + B)
	fmt.Println(A - B)
	fmt.Println(A * B)
	fmt.Println(A / B)
	fmt.Println(float32(A) / float32(B))
	fmt.Println(A % B)
}
