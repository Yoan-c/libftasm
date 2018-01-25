section .text
	global _ft_tolower

_ft_tolower:
	mov rax, rdi
	cmp rdi, 65
	jl end
	cmp rdi, 90
	jg end
	add rdi, 32
	mov rax, rdi
	ret

end:
	ret
