section .data

    ;declaraçao

        pedido db "Digite sua senha: "   ;msg
        pedido_tam equ $ - pedido         ;tamanho da sennha constante   
        pedido2 db "Digite sua senha(2): "
        pedido2_tam equ $ - pedido2
        
        resultado db "Sua senha e: "
        resultado_tam equ $ - resultado
        
        
        senha_tam dd 0
        senha_max equ 80

        senha2_tam dd 0
        senha2_max equ 80



section .bss

        senha resb senha_max
        senha2 resb senha2_max
        
section .text
        
    ;instruçoes


global main        
main:

    ;inicio

        ;BLOCO 1
        ;escreve msg pedindo senha

        mov eax, 4                      ;escreve
        mov ebx, 1                      ;no monitor
        mov ecx, pedido                  ;mensagem a escrever
        mov edx, pedido_tam              ;tamanho da msg
        int 0x80                        ;chamar o linux
        
        

        ;BLOCO 2
        ;le a senha apartir do teclado

        mov eax, 3
        mov ebx, 0
        mov ecx, senha
        mov edx, senha_max
        int 0x80
        mov [senha_tam], eax


        ;BLOCO 3
        ;escreve msg pedindo senha
        senha_dois:
        mov eax, 4                      ;escreve
        mov ebx, 1                      ;no monitor
        mov ecx, pedido2                  ;mensagem a escrever
        mov edx, pedido2_tam              ;tamanho da msg
        int 0x80                        ;chamar o linux

        
        

        mov eax, 3
        mov ebx, 0
        mov ecx, senha2
        mov edx, senha2_max
        int 0x80
        mov [senha2_tam], eax
        mov ebx, eax

    
        validar:
        cmp ebx, [senha_tam]
        jne senha_dois
        




        ;verificar senha
        mov esi, 0

        validar_senha:
        mov al,[senha+esi]
        cmp al,[senha2+esi]
        jne senha_dois

        inc esi
        cmp esi, [senha_tam]
        jp validar_senha

        ; codigicar

        mov esi, 0
        codifica:
        mov al, [senha+esi]
        add al, 0x01
        mov [senha+esi],al

        inc esi
        cmp esi, [senha_tam]
        jb codifica

        ; cout final
        ;escreve qual e a senha
        mov eax, 4
        mov ebx, 1
        mov ecx, resultado
        mov edx, resultado_tam
        int 0x80

        
        ;escreve senha lida

        mov eax, 4
        mov ebx, 1
        mov ecx, senha  
        mov edx, [senha_tam]
        sub edx, 1
        int 0x80
fim:

    ;fim

mov ebx, 0  ;return
mov eax, 1  ;exec (exit)
int 0x80    ;exec encerra


