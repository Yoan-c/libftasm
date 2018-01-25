section .text
	global _ft_toupper

_ft_toupper:
	mov rax, rdi
	cmp rdi, 97
	jl end
	cmp rdi, 122
	jg end
	sub rdi, 32
	mov rax, rdi
end:
	ret
