; land of lisp

; 파일 로드: (load "filename.lisp")


; Global variable 정의
(defparameter *small* 1)
(defparameter *big* 100)

; Global function 정의
(defun guess-my-number ()
    (ash (+ *small* *big*) -1))  ;산술 시프트(arithmetic shift)
(defun smaller ()
    (setf *big* (1- (guess-my-number)))
    (guess-my-number))
(defun bigger ()
    (setf *small* (1+ (guess-my-number)))
    (guess-my-number))
(defun start-over ()
    (defparameter *small* 1)
    (defparameter *big* 100)
    (guess-my-number))