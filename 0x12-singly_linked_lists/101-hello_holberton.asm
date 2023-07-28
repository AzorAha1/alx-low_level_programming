section .data
	text db 'Hello, Holberton', 0xA ;
	text_length equ $ - text

section .bss
	resb 1

section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, text
	mov rdx, text_length
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
