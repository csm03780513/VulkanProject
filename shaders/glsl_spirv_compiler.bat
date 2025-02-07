@echo off
echo compiling glsl shaders to spirv 
for /r %%i in (*.vert;*.frag) do glslangValidator.exe -V "%%i" -o  "%%~dpiSPIRV\%%~nxi".spv
