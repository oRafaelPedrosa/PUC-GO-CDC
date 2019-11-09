
extern multiplica
; multiplica os valores interiros
; POSITIVOS que estão em RBX e RDX
; e retorna o resultado em RAX
; RAX = RBX * RDX
; RAX = 0
; PARA i = 0 ate RDX -1
;   RAX+=RBX

section .text
        
        global main

main:
    ;Imprimindo a string (operação de saida)
    mov rbx, 8
    add rbx, 3

    call multiplica

    mov rax, rbx

ret