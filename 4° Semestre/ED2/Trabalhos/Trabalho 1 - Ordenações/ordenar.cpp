#include "ordenar.h"

Ordenar::Ordenar()
{

}
bool Ordenar::selectionsort(item ** Vet, int tamanho)
{
    long int i,j,imin;
    item *T = 0, *left = 0, *right =0;
    if(tamanho != 0){
        for(i=0;i<tamanho

            -1;i++){

            imin=i;
            for(j=i+1;j<tamanho;j++){
                left = Vet[j]; right = Vet[imin];
                if(left->getChave() < right->getChave())
                    imin=j;

            }
            if(i != imin){
                T = Vet[i];
                Vet[i] = Vet[imin];
                Vet[imin] = T;
                T = 0;
            }
        }
        return true;
    }
    return false;
}


bool Ordenar::insertionsort(item ** Vet, int tamanho)
{
    long int i,j;
    item *T = 0, *left = 0;
    if(tamanho != 0){
        for(j = 1; j < tamanho; j++){

            T = Vet[j];
            i = j-1;
            left = Vet[i];
            while(i>=0 && left->getChave()>T->getChave()){

                (Vet[i+1]) = (Vet[i]);
                i--;
                left = Vet[i];

            }
            Vet[i+1] = T;
        }
        return true;

    }
    return false;
}


bool Ordenar::bubblesort1(item ** Vet, int tamanho)
{
    if(tamanho != 0){
    int Lsup, Bolha, j;
    item * Aux = nullptr;
    Lsup = tamanho - 1;
    do { // repita
        Bolha = 0;
        for ( j = 0; j < Lsup; j++ ) {
            if (Vet[j]->getChave() > Vet[j+1]->getChave()) {
                Aux = Vet[j];
                Vet[j] = Vet[j+1];
                Vet[j+1] = Aux;
                Bolha = j;
            }
        }
        Lsup = Bolha;
    }while( Lsup > 0 );
    return true;
    }
    return false;
}


