section .data
	n: db "(null)",0
	n2: db "",0
section .text
	global _ft_strchr
	extern _ft_strlen

_ft_strchr:
	cmp rdi, 0
	jle _end
	cmp rsi, 0
	jle _null
	cmp rsi, 0
	jle _end
	mov rcx, -1

strchr_init:
	push rdi
	push rsi
	call _ft_strlen
	mov rcx, rax
	mov rax , 0
	pop rsi
	pop rdi

strchr:
	cld
	mov ax, si
	mov rax, rsi
	repnz scasb
	je _find
	jmp _end

_find:
	dec rdi
	mov rax, rdi
	ret

_end:
	lea rax, [rel n]
	ret

_null:
	lea rax, [rel n2]
	ret
