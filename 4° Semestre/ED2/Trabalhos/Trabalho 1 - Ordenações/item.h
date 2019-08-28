#ifndef ITEM_H
#define ITEM_H
#include <bits/stdc++.h>
using namespace std;

class item
{
private:
    int chave;
    string str;
public:
    item();
    void setChave(int chave);
    int getChave()const;
    string getStr()const;
};

#endif // ITEM_H
