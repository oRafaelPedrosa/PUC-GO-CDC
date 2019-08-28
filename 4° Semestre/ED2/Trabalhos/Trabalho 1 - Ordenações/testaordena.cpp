#include "testaordena.h"
#include <item.h>
#include <stdlib.h>
#include <ordenar.h>
testaordena::testaordena()
{
    tamanho = 0;
    Vet = nullptr;
}
testaordena::~testaordena()
{
    delete Vet;
}
bool testaordena::setTamanho(int tamanho)
{
    if(tamanho >=10 and tamanho <= 100000)
    {
        this->tamanho = tamanho;
        Vet = new item *[tamanho];
        for(int i=0;i<tamanho;i++)
        {
            Vet[i] = new item;
        }

        return true;
    }
    return false;
}
item **testaordena::copiaVetor()
{
    item**Copia = new item*[tamanho];
    for(int i=0;i<tamanho;i++)
        Copia[i] = Vet[i];
    return Copia;
}
void testaordena::preencheVetor()
{
    int r = 0;
    for(int i=0;i<tamanho;i++)
    {
        r = (rand() * 37) % tamanho;
        r = abs(r);
        Vet[i]->setChave(r);

    }
}
void testaordena::mostrarVetor(item **Vet)
{
    cout<<endl<<endl<<endl<<"Inicio : ";
    for(int i=0;i<tamanho;i++)
    {
        cout<<Vet[i]->getChave()<<" "
           <<Vet[i]->getStr()<<"  :  ";
    }
    cout<<" : Fim"<<endl<<endl<<endl;
}
void testaordena::Menu()
{
    int n;
    do
    {
        cout<<"Digite o tamanho: de 100 ~ 100.000 : ";
        cin>>n;
    }while(!setTamanho(n));

    preencheVetor();
    item**copia = copiaVetor();


    mostrarVetor(copia);


    Ordenar X;
    X.bubblesort1(copia,tamanho);
    //X.insertionsort(copia,tamanho);
    //X.selectionsort(copia,tamanho);


    mostrarVetor(copia);
}
