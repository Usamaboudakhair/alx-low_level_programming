section .data
	message db "Hello, Holberton", 0

section .text
	global main
	extern printf


main:
	mov rax, 1

	mov rdi, 1
	mov rsi, msg
	mov rdx, msglem
	syscall
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
