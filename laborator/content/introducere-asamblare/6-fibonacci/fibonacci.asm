%include "printf32.asm"

section .text
    global main
    extern printf

main:
    mov eax, 7       ; vrem sa aflam al N-lea numar; N = 7
    ; TODO: calculati al N-lea numar fibonacci (f(0) = 0, f(1) = 1)
    mov ecx, 0
    mov ebx, 1

FIBONACCI_SIR:
    dec eax ;decrementam cu 1
    test eax, eax ;seteaza ZF la 1 
    je print_fibonacci 
    add ecx, ebx
    xchg ecx, ebx
    jmp FIBONACCI_SIR
    
print_fibonacci:
    PRINTF32 `%d\n\x0`, ebx
    xor ecx, ecx
    ret