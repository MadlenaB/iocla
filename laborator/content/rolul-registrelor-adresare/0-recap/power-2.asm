%include "../utils/printf32.asm"
section .text
extern printf
global main
main:
    push ebp
    mov ebp, esp

    mov eax, 211  ; to be broken down into powers of 2
    mov ebx, 1    ; stores the current power

rezolvare:
    cmp ebx, eax
    jg end
    test ebx, eax             ; test sets the zero flag ZF when the result of the AND operation is 0 IF two operands are equal, their bitwise AND is zero when both are zero
    jz increase               ; daca ZF ajunge 0 atunci mergem la increase
    PRINTF32 '%u\n\x0', ebx

; TODO - print the powers of 2 that generate number stored in EAX
increase:
    shl ebx,1                 ; shiftam la stanga ebx cu 1
    jmp rezolvare             ; jmp - unconditional jump

end:
    leave
    ret