all: file1.exe file2.exe

file1.exe: file1.cpp
	g++ file1.cpp -o file1.exe

file2.exe: file2.c
	gcc -Wall -g file2.c -o file2.exe