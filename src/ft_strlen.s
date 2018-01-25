section .text
	global _ft_strlen

_ft_strlen:
	cmp rdi, 0
	jle end
	mov rcx, -1
	mov rax, 0x0
	cld ; met les flags a 0
	repne scasb ; repne copie tant que ZF != 0 et inc rdx , scasb sert a reprer un bit dinc la le char null dans rdi
	;sub rax, rcx
	not rcx ; inverse la valeur des bits -6 = 5
	dec rcx
	mov rax, rcx
	ret


end:
	mov rax, 0
	ret
