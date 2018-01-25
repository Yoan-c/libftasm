section .text
	global _ft_isprint

_ft_isprint:
	cmp rdi, 32
	jl _not_print
	cmp rdi, 126
	jg _not_print
	mov rax, 1
	ret

_not_print:
	mov rax, 0
	ret
