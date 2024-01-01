section .data
    hello db "Hello, Holberton", 0

section .text
    global _start

_start:
    ; Call printf function
    mov rdi, hello
    xor rax, rax
    call printf

    ; Exit program
    mov eax, 60
    xor edi, edi
    syscall
