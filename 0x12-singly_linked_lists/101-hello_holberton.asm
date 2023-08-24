section .data
    hello db "Hello, Holberton",0
    format db "%s",10,0

section .text
    global main
    extern printf

main:
    mov esi, hello
    mov edi, format
    xor eax, eax
    call printf
    ret
