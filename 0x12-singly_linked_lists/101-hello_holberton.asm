section .data
    hello db "Hello, Holberton\n", 0

section .text
    global main
    extern printf

main:
    ; Call printf function
    mov rdi, hello
    xor rax, rax
    call printf

    ; Exit program
    xor eax, eax
    ret