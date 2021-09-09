% hello world

:- initialization hello, halt.

hello :- 
    write('Hello World!'), nl.

% terminal에서 swipl -q -l hello.pl