SECTION .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

SECTION .text
	extern printf
	global main
main:
	mov rsi, msg    ; passing order starts w/ rdi, rsi, ...
	mov rdi, fmt    ;
	mov rax, 0      ; printf is varargs, 
	call printf

	mov rbx, 0      ; normal-exit code
	mov rax, 1      ; process-termination service
	ret
