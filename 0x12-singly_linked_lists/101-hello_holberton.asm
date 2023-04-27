section .data
    hello db 'Hello, Holberton', 10, 0  ; hello string with newline character

section .text
    global _start

_start:
    ; prepare arguments to printf function
    mov edi, hello   ; format string
    xor eax, eax     ; zero out eax register (number of SSE registers used for arguments)
    call printf      ; call printf function

    ; exit program with return value of 0
    xor edi, edi     ; return value 0
    mov eax, 60      ; exit syscall number
    syscall          ; call exit syscall

