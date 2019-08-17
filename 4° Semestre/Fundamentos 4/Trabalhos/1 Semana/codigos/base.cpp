#include <iostream>
#include <stack>
#include <math.h>
#include <string.h>
#include <string>
using namespace std;

Bin(int N)
{
	stack <int> Pilha;
	while(N)
	{
		Pilha.push(N%2);
		N = N/2;
	}
	while(!Pilha.empty())
	{
		cout << Pilha.top();
		Pilha.pop();
	}
	cout << endl;
}
Decimal(int N)
{
	int cont = 0;
	int m=N;
	while(N)
	{
		N = N/10;
		cont++;
	}
	int Aux, Soma = 0;
	for(int i=0; i<cont; i++)
	{
		Aux = m%10;
		Soma += Aux* (pow(2,i));
		m = m/10;
	}
	
	cout << Soma << endl;
}
QualquerBase(int N, int base1,int base2)
{
	int cont = 0;
	int m=N;
	while(N)
	{
		N = N/base2;
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
#include <sstream>
#include <algorithm>


QualquerBase_string(double N, int base1, int base2)
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
	while(N)
	{
		N = N/base2;
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


main ()
{
	//Decimal(1010);
	//Bin(10);
	//QualquerBase(0010,2,8);
	QualquerBase_string(13.5,10,8);	
}
