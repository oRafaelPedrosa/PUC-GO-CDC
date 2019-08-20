#include <iostream>
#include <stack>
#include <math.h>
#include <string.h>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;



void QualquerBase_string(double N, int base1, int base2)
{

    //string resultado =  to_string(N);
    //cout << resultado;

    ostringstream strs;
    double dbl = N;
    strs << dbl;
    string str = strs.str();
    //cout << str;

    str.erase(std::remove(str.begin(), str.end(), '.'), str.end());
    //cout << str;

    int cont = 0;
    int m=0;
    m = atoi(str.c_str());

    int m2=m;
    while(m2)
    {
        m2 = m2/base2;
        cont++;
    }

    int Aux, Soma = 0;
    for(int i=0; i<cont; i++)
    {
        Aux = m%base2;
        Soma += Aux* (pow(base1,i));
        m = m/base2;
    }

    cout << Soma << endl;
}


int main ()
{
    //Decimal(1010);
    //Bin(10);
    //QualquerBase(0010,2,8);
    QualquerBase_string(84.5,14,8);
}
