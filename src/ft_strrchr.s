section .data
	n: db "(null)",0
section .text
	global _ft_strrchr
	extern _ft_strlen

_ft_strrchr:
	push rdi
	call _ft_strlen
	mov rcx, rax
	pop rdi
	push rcx
	cld
	mov rax, 0
	repnz scasb
	mov rax, rsi
	pop rcx
	std
	repnz scasb
	je _find
	jmp _end

_find:
	inc rdi
	mov rax, rdi
	ret

_end:
	scasb
	je _find ;verifie le premier caractere 
	lea rax, [rel n] 
	ret
