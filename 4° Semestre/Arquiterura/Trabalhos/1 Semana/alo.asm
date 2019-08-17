section .data
msg db "Alo, Mundo!",LF
tam equ $-msg
LF equ 10
section .text
        global main
main:
; Imprimindo a string (operaão de saida)
mov edx, tam
mov ecx, msg
mov ebx, 1
mov eax, 4
int 0x80
fim:
;encerrando
mov ebx, 0
mov eax, 1
int 0x80
