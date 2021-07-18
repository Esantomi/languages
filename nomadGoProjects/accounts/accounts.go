package accounts

// Account struct (comment는 struct 이름으로 시작하게 남겨야 한다.)
type Account struct {
	owner   string
	balance int // 잔고
	// export를 위해 struct, field 이름을 uppercase로 쓴다. (Account, Owner)
	// uppercase로 시작하면 public, lowercase로 시작하면 private이 된다.
	//
}

// Go는 생성자(constructor)가 없으므로 function이 struct를 만들게 한다.
// NewAccount creates Account
func NewAccount(owner string) *Account {
	account := Account{owner: owner, balance: 0}
	return &account
}
