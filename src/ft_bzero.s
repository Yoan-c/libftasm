section .text
	global _ft_bzero

_ft_bzero:
	cmp rdi , 0
	je end
	cmp rsi, 0
	je end
	call ft_loop

ft_loop:
	cmp rsi, 0
	je end
	mov byte [rdi], 0
	inc rdi
	dec rsi
	jmp ft_loop

end:
	ret
