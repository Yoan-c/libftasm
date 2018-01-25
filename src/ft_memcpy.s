section .text
	global _ft_memcpy

_ft_memcpy:
	cmp rdx, 0
	jl _end
	mov r8, rdi
	mov rcx, rdx
	rep movsb ; copie chaque bit et inc les 2 registres rdi et rsi
	mov rax, r8
	ret

_end:
	mov rax, rdi
	ret
