call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"

cl /EHsc /Z7 /Fo"bin/main.obj" /Fe"bin\main.exe" src/main.c /link user32.lib
