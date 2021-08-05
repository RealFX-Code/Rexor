@echo off
md C:\Rexor
md C:\Rexor\bin
del C:\Rexor\readme.txt /q
echo Rexor is a free / open source game launcher, made to look like an actual game launcher. > C:\Rexor\readme.txt
echo. >> C:\Rexor\readme.txt
echo When play button is pressed, it opens .\\bin\rexor-32.exe >> C:\Rexor\readme.txt
echo Unless, Debug mode is enabled, in wich case it opens .\\bin\rexor-debug-32.exe >> C:\Rexor\readme.txt
echo. >> C:\Rexor\readme.txt
echo Source code can be found and edited in the github repo, >> C:\Rexor\readme.txt
echo this was the first C# project i have done, so it's going >> C:\Rexor\readme.txt
echo to have some bad code. >> C:\Rexor\readme.txt
echo. >> C:\Rexor\readme.txt
echo Thanks, RealFX. >> C:\Rexor\readme.txt

md LibsTemp
attrib +h LibsTemp
7za.exe e -bd -oLibsTemp -y Libs.compressed
rd .\LibsTemp\Libs
copy LibsTemp\* C:\Rexor\bin\
copy C:\Rexor\bin\Launcher.exe C:\Rexor\Launcher.exe
del C:\Rexor\bin\Launcher.exe /Q

attrib -h LibsTemp
rd .\LibsTemp\lib
del .\LibsTemp\* /Q
rd .\LibsTemp

start C:\\Rexor\\Launcher.exe
