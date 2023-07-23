# Visual Studio Code Catch2 (old version)
# Visual Studio Code Livestream #1: TDD Embedded
# https://www.youtube.com/watch?v=_51MXgwJj3g
# https://github.com/ucgosupl/code-from-stream/tree/master/1
# https://github.com/catchorg/Catch2/tree/v2.x

cd test\template\out
cmake .. -GNinja
ninja -v
template_tests.exe
------------------------------------------------------------

# Visual Studio Code Catch2 (new version) - nie działa
# https://www.youtube.com/watch?v=ScjedGkrKb4 (?)

cd Catch2
mkdir build
cd build
cmake --help
"c:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x86_amd64
cmake -G "NMake Makefiles" ..
# cmake -G "Unix Makefiles" ..
nmake
nmake install ::& to C:/Program Files (x86)/Catch2
------------------------------------------------------------

# https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md
git clone --depth 1 https://github.com/Microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat
vcpkg integrate install
vcpkg install catch2

# -DCMAKE_TOOLCHAIN_FILE=C:/Users/jarsulk/Desktop/vcpkg/scripts/buildsystems/vcpkg.cmake
------------------------------------------------------------

How to write C++ unit tests with Catch2 and Meson
https://www.youtube.com/watch?v=wttsSAc721A

https://github.com/acc-cosc-1337-summer-2023/course-artgonzalezacc/blob/master/windows.md
https://github.com/acc-cosc-1337-summer-2023/course-artgonzalezacc/blob/master/vs-code-ext.md

https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md
https://github.com/catchorg/Catch2
