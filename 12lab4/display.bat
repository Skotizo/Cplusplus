@echo off
if not exist %1 goto doesnt
echo %1 does exits
pause
exit
:doesnt
echo %1 does not exist
pause 
exit