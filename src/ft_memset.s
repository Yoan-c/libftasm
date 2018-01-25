section .text
	global _ft_memset

_ft_memset:
	mov rax, rsi
	mov r8, rdi ; sauvegarde le debut de rdi
	mov rcx, rdx
	rep stosb ; copie rax dans rdi par byte et inc rdi
	mov rax, r8 ; remet le debut dans rax
	ret

