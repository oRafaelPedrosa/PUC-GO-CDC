#include "item.h"

item::item()
{
    chave = 0;
    str = "---";
}
void item::setChave(int chave)
{
    this->chave = chave;
}

int item::getChave()const
{
    return chave;
}

string item::getStr()const
{
    return str;
}
