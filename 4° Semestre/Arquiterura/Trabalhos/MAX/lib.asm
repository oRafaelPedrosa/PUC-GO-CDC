
global multiplica
multiplica:

    push rsi

    mov rax, 0

    mov rsi, 0

    repita:
    cmp rsi, rdx
    ja fim_repita
        add rax, rbx
        inc rsi
        jmp repita
    fim_repita:
    pop rsi
ret