section .text
	global _ft_isalpha

_ft_isalpha:
	cmp rdi, 65
	jl end
	cmp rdi, 90
	jg _is_min
	jmp _alpha

_is_min:
	cmp rdi, 97
	jl end
	cmp rdi, 122
	jg end
	call _alpha
	ret

_alpha :
	mov rax, 1
	ret

end :
	mov rax, 0
	ret
