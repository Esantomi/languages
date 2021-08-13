{- Wikibooks Haskell -}
-- https://wikidocs.net/book/204


{- 1.2 변수와 함수 -}
-- terminal에 ghci 입력해서 개발 환경 사용 가능

r = 5.0            -- 반지름
area = pi * r ^ 2  -- 원의 넓이
-- let area = pi * 5 ^ 2 같은 식으로 GHCi에서 바로 변수 정의가 가능하지만 실용적이지 않다.
r2 = 3               -- 반지름2
area2 = pi * r2 ^ 2  -- 원의 넓이2

{- GHCi에 파일 불러오기:
:load 01_varfun.hs
:l 01_varfun.hs

파일 수정 후 다시 불러오기:
:reload
:r -}


{- 명령형 프로그래밍과의 차이점 -}
{- 다음의 코드는 하스켈에서 작동하지 않는다. 하스켈의 변수는 immutable하기 때문이다.
r = 5
r = 2
특정 변수를 사용하기 위해 먼저 선언할 필요도 없다. -}