section .data
    num1 db 5             ; First number (5)
    num2 db 3             ; Second number (3)
    result db 0           ; Variable to store the result

section .text
    global _start

_start:
    ; Load the first number into AL register
    mov al, [num1]

    ; Add the second number to AL
    add al, [num2]

    ; Store the result in the result variable
    mov [result], al

    ; Exit the program
    mov eax, 60           ; syscall: exit
    xor edi, edi          ; status: 0
    syscall
