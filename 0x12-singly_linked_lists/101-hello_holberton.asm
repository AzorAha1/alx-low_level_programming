section .data
	text db "Hello, Holberton", 0xA ;
	text_length equ $ - text

section .text
	global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, text
	mov rdx, text_length
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
