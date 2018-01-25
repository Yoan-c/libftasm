%define MACH_SYSCALL(nb)	0x2000000 | nb
%define READ				3
%define WRITE				4
%define SIZE				512


section .data
	n: db  '$'

section .bss
	data:
		.buff resb SIZE

section .text
	global _ft_cat
	extern _ft_strlen
	extern _ft_puts

_ft_cat:
	jc _end
	push rbp
	mov rbp, rsp
	sub rsp, 16

_cat:
	mov rdx, SIZE
	lea rsi, [rel data.buff]
	push rdi ; save le fd
	mov rax, MACH_SYSCALL(READ) ; retourne le nb octects lus
	syscall
	jc _end ; test le Carry flag si -1 alors exit 
	push rax ; save le nb octects lu
	cmp rax, 0 
	jl _end ; si < 0 fin ou erreur
	jmp _write

_write:
	lea rsi, [rel data.buff] ; on recupere la valeur de data
	pop rdx ; recupere le nb d'octects
	pop rdi ; recupere le fd
	push rdx ; save le nb octect pour recup dans rax plus tard
	push rdi ; on le save pour l'utiliser pour relir le doc
	mov rdi, 1
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	cmp rax, 0 ; on verifie si on a ecrit ou si il y a eu une erreur
	jle _end
	pop rdi
	pop rax ; recupere rax pour la boucle
	cmp rax, 0
	jg _cat ; rappel cat pour boucler

_end:
	mov rsp, rbp
	pop rbp
	ret
