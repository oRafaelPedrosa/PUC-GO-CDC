#ifndef ORDENAR_H
#define ORDENAR_H
#include <item.h>

class Ordenar
{
public:
    Ordenar();
    static bool selectionsort(item ** Vet, int tamanho);
    static bool insertionsort(item ** Vet, int tamanho);
    static bool bubblesort1(item ** Vet, int tamanho);
};

#endif // ORDENAR_H
