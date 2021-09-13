// main은 entry point라 compiler는 파일명이 main인 것을 찾아내 compile한다 //
// 따라서 compile해야 한다면 파일명은 반드시 main.go로 해야 한다. //
// 라이브러리 구축 등이 목적이라면 main.go로 파일명을 정할 필요가 없다. //

package main // main 패키지 사용

import (
	"fmt" // formatting을 위한 패키지

	"github.com/Esantomi/learngo/something"
)

func main() { // compiler가 먼저 실행하는 function
	fmt.Println("Hello World!") // Go는 function을 export할 때 대문자로 시작해 준다.
	something.SayHello()        // something.go에서 import해서 사용할 수 있다.
	// something.sayBye()      // something.sayBye()는 private function이라 import가 불가하다.
	println("Hello World?") // 그냥 println
}
