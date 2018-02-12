section .text
	global _ft_isspace

_ft_isspace:
	cmp rdi, 0
	jle _end
	cmp rdi, 32
	je isspace
	cmp rdi, 8
	jle _end
	cmp rdi, 14
	jge _end

isspace:
	mov rax, 1
	ret

_end:
	mov rax, 0
	ret
