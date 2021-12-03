
set MATLAB=C:\Software_tool\Matlab

cd .

if "%1"=="" ("C:\SOFTWA~1\Matlab\bin\win64\gmake"  -f PID_Crtl.mk all) else ("C:\SOFTWA~1\Matlab\bin\win64\gmake"  -f PID_Crtl.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1