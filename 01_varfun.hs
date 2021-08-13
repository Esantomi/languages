{- Wikibooks Haskell -}
-- https://wikidocs.net/book/204


{- 1.2 변수와 함수 -}

{- terminal에 ghci 입력해서 개발 환경 사용 가능
GHCi(Glasgow Haskell Compiler interactive)

GHCi에 파일 불러오기:
:load 01_varfun.hs
:l 01_varfun.hs

파일 수정 후 다시 불러오기:
:reload
:r -}


{- 변수(variable) -}
r = 5.0                 -- 반지름
areaVar = pi * r ^ 2    -- 원의 넓이
-- let area = pi * 5 ^ 2 같은 식으로 GHCi에서 바로 변수 정의가 가능하지만 실용적이지 않다.
r2 = 3                  -- 반지름2
areaVar2 = pi * r2 ^ 2  -- 원의 넓이2

{- 명령형 프로그래밍과의 차이점:
다음의 코드는 하스켈에서 작동하지 않는다.
(하스켈의 변수는 immutable하기 때문이다.)
r = 5
r = 2
특정 변수를 사용하기 위해 먼저 선언할 필요도 없다. -}


{- 함수(function) -}
area r = pi * r ^ 2             -- area 함수 정의. 원의 넓이 구하기
areaRect l w = l * w            -- areaRect 함수 정의. 2개의 argument(l, w). 직사각형의 넓이 구하기
areaTriangle b h = (b * h) / 2  -- areaTriangle 함수 정의. 삼각형의 넓이 구하기
double x = 2 * x                -- double 함수 정의. 2배 해 주는 함수
quadruple x = double (double x) -- quadruple 함수 정의. 4배 해 주는 함수
square x = x * x                -- square 함수 정의. 제곱해 주는 함수
half x = x / 2                  -- half 함수 정의. 반으로 나눠 주는 함수
areaSquare s = areaRect s s     -- areaSquare 함수 정의. 함수 합성 이용. 정사각형의 넓이 구하기

{- 하스켈의 함수 정의는 변수 정의 방법과 비슷하나, 좌변 함수명 뒤에 argument를 놓는다는 점이 다르다.
parameter를 넣어 함수를 호출할 수 있다. 즉, area 5 같은 식으로 사용이 가능하다.

하스켈 함수는 +나 * 같은 모든 연산자보다 우선순위를 부여받는다.
가령 area 5 * 3은 (area 5) * 3과, area (5 * 3)은 area 15와 같다.

평가(evaluation): 각각의 함수를 그 정의로 치환하고 단일 값이 남을 때까지 결과를 계산

함수도 다른 함수의 패러미터가 될 수 있다. 따라서 아래와 같이 쓰면 에러가 발생한다.
quadruple x = double double x
이는 double이 double과 x를 parameter로 받기 때문이다. 바르게 쓰면 아래와 같다.
quadruple x = double (double x)

함수 합성: 앞서 정의한 함수를 활용해 새로운 함수를 정의  e.g. areaSquare -}