; SPDX-License-Identifier: BSD-3-Clause

extern printf

section .data
	message db "Hello", 0

section .text

global print_hello

;   TODO: Adăugați instrucțiunea lipsă
print_hello:
	push ebp
	; dupa ret se va executa asm_call_wrapper
	mov ebp, esp
	push message
	call printf
	add esp, 4

	leave
	ret
