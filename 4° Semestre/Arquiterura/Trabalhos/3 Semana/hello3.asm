section .data
msg db " ALO PUCGOIAS",LF ; primeira string
tam equ $ - msg ; tamanho da string 1
msg2 db "estou chegando!", LF
LF equ 0xA ; segunda string
tam2 equ $ - msg2 ; tamanho da string 2
section .text
global main
main:
; BLOCO 1; Escreve a 1ª msg para o monitor ("stdout")
mov eax, 4
mov ebx, 1
mov ecx, msg
mov edx, tam
int 0x80
; BLOCO 2
; Escreve a 2ª mensagem para o monitor ("stdout")
mov eax, 4 ; (system call); 4 =sys_write
mov ebx, 1 ; Para 1 = stdout
mov ecx, msg2 ; ecx = endereco da msg a escrever
mov edx, tam2
; Para sys_write, edx = tam da mensagem a escrever
int 0x80 ; Chamar o Linux
; BLOCO 3
; Termina o programa
mov eax, 1
mov ebx, 0
int 0x80