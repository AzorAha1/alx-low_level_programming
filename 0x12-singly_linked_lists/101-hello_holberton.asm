section .data
	text db 'Hello, Holberton', 0xA ;
	text_length equ $ - text

section .text
	global _start

_start:
	mov eax, 1
	mov edi, 1
	mov esi, text
	mov edx, text_length
	syscall

	mov eax, 60
	xor edi, edi
	syscall
