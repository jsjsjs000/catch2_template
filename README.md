\# Visual Studio Code Catch2 (old version)
\# Visual Studio Code Livestream #1: TDD Embedded
\# https://www.youtube.com/watch?v=_51MXgwJj3g
\# https://github.com/ucgosupl/code-from-stream/tree/master/1
\# https://github.com/catchorg/Catch2/tree/v2.x

cd test\template\out
cmake .. -GNinja
ninja -v
template_tests.exe

\# or
cmake .. -GNinja && ninja -v && template_tests.exe
------------------------------------------------------------


\# Livestream #1
\## Test Driven Development w systemach Embedded

Kod utworzony podczas streama:
https://www.youtube.com/watch?v=_51MXgwJj3g

Dodatkowe materiały o TDD embedded:
https://ucgosu.pl/tdd-embedded/

Wykorzystane biblioteki:
Catch2: https://github.com/catchorg/Catch2  
Trompeloeil: https://github.com/rollbear/trompeloeil  
mingw-std-threads: https://github.com/meganz/mingw-std-threads  
