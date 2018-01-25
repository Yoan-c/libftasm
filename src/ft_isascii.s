section .text
	global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	jl _no_ascii
	cmp rdi, 127
	jle _ascii
	jmp _no_ascii

_no_ascii:
	mov rax, 0
	ret

_ascii:
	mov rax, 1
	ret
