#ifndef TESTAORDENA_H
#define TESTAORDENA_H
#include <item.h>
#include <bits/stdc++.h>
#include <ordenar.h>

class testaordena
{
private:
    int tamanho;
    item **Vet;
public:
    testaordena();
    ~testaordena();
    bool setTamanho(int tamanho);
    item **copiaVetor();
    void preencheVetor();
    void mostrarVetor(item**Vet);
    void Menu();
};

#endif // TESTAORDENA_H
