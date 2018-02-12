section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy

_ft_strdup:
	push rbp ; 1
	mov rbp, rsp ;2
	sub rsp, 16 ; 3 on decale la stak voir forum sinon 16 byte aligned error
	push rdi ; save la chaine rdi
	call _ft_strlen
	inc rax
	push rax ; save la longueur 
	mov rdi, rax
	call _malloc
	cmp rax, 0 ; verifie le malloc
	jle _end
	mov rdi, rax ; place la memoir dans rdi
	pop rdx ; recupere la longeur len
	pop rsi ; recupere la chaine rdi du 1er push
	push rdx
	call _ft_memcpy
	mov rsp, rbp; on remet rsp
	pop rbp; on recupere la stack d'avant
	ret

_end:
	mov rsp, rbp; on remet rsp
	pop rbp; on recupere la stack d'avant
	ret
	mov rax, 0
	ret
