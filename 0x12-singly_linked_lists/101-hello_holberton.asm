	extern printf

		section .data ;this is the data section
msg:		db "Hello, Holberton", 0 ; initialised variable 1
fmt:		db "%s", 10, 0 ;The printf format in a new line(10)

		section .text;our code section
		global main ;standard gcc entry point
main:  ;label used to mark the entry point
		push rbp ;setting up a stack frame

		mov rdi,fmt
		mov rsi,msg
		mov rax,0   ;can either be xor rax , rax
		call printf ;call the printf function in c

		pop rbp ;restore stack

		mov rax,0
		ret  ;return keyword
