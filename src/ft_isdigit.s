section .text
	global _ft_isdigit

_ft_isdigit:
	mov rax, 0
	cmp rdi, 48
	jl _not_digit
	cmp rdi, 57
	jg _not_digit
	mov rax, 1
	ret

_not_digit:
	mov rax, 0
	ret
