%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4

section .data
	error:
		.n db "Error", 0
		.len equ $ - error.n

section .text
	global _ft_putstr
	extern _ft_strlen

_ft_putstr:
	push rdi
	call _ft_strlen
	mov rdx, rax
	pop rdi
	lea rsi, [rel rdi]
	mov rdi, STDOUT
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	cmp rax, 0
	jl _exit

_end:
	ret

_exit:
	mov rdx, 5
	lea rsi, [rel error.n]
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	mov rax, -1
	ret
