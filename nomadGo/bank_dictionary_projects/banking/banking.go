package banking

// Account struct
// comment는 struct 이름으로 시작하게 남겨야 한다.
type Account struct {
	Owner   string
	Balance int // 잔고
	// export를 위해 struct, field 이름을 uppercase로 쓴다.
	// Owner로 쓰면 public, owner로 쓰면 private이 된다.
}
