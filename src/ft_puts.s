%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4
%define EOF					-1
%define OK					10

section .data
hello:
	.n db 10
	.string db "(null)", 0
	.len equ $ - hello.string

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	cmp rdi, 0
	jle end 
	lea rsi, [rel rdi]
	call _ft_strlen
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	cmp rax, 0
	jl exit
	mov rdx, 1
	lea rsi, [rel hello.n]
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	mov rax, OK
	ret

end:
	lea rdi, [rel hello.string]
	mov rax, EOF
	jmp _ft_puts
	ret

exit:
	mov rdx, 1
	lea rsi, [rel hello.n]
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	mov rax, EOF
	ret
