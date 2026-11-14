@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b %errorlevel%
"C:\Program Files\LLVM\bin\clang-cl.exe" /nologo /std:c++20 /Zs /clang:-Xclang /clang:-fdump-record-layouts /Iout/build/x64-clang-release/_deps/slint-build/generated_include /Iout/build/x64-clang-release/_deps/slint-src/api/cpp/include out/startup-abi.cpp
