#include <iostream>
#include <stack>
#include <math.h>
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
main ()
{
	INICIO:
	int N, Opcao;
	
	cout << "[1] - DECIMAL -> BINARIO\n";
	cout << "[2] - BINARIO -> DECIMAL\n";
	cin >> Opcao;
	cout << "QUAL O NUMERO: ";
	cin >> N;
	switch(Opcao)
	{
		case 1: Bin(N);
			break;
		case 2:
			Decimal(Bin(N));
				break;
	}
	goto INICIO;
	
}