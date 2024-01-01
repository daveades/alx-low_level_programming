ssection .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    ; Call printf function
    mov rdi, hello
    xor rax, rax
    call printf

    ; Exit program
    mov eax, 0x60
    xor edi, edi
    ret