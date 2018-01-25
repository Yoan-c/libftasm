section .text
	global _ft_strcat

_ft_strcat:
	mov rax, rdi
	call _fin_s1

_fin_s1:
	cmp BYTE [rdi], 0
	je _add_s1
	inc rdi
	jmp _fin_s1

_add_s1:
	cmp BYTE [rsi], 0
	je _end
	mov rdx , [rsi]
	mov [rdi], rdx
	inc rdi
	inc rsi
	jmp _add_s1

_end:
	ret

