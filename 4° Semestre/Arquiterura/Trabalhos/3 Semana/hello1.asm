section .data
msg db "Alo, mundo!",LF
tam equ $-msg
LF equ 10
section .text
global main
main:
; Imprimindo a string (operacao de saida)
mov edx, tam
mov ecx, msg
mov ebx, 1
mov eax, 4
int 0x80
fim:
; Encerrando
mov ebx,0
mov eax,1
int 0x80