#include <iostream>
#include <stack>
#include <math.h>
#include <string.h>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;



void QualquerBase_string(long double N, long long int base1, long long int base2)
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
    long double N1;
    int Opcao;
	do
	{
		system("cls");
		cout << "[1] - Binario -> Decimal\n";
	 	cout << "[2] - Decimal -> Binario\n";
	 	cout << "[3] - Decimal -> Hexa\n";
	 	cout << "[4] - Decimal -> Octal\n";
	 	cout << "[5] - Octal -> Decimal\n";
	 	cout << "[6] - De X para Y\n";
	 	cout << "[0] - Sair\n";
	 	cin >> Opcao;
	 	
	 	system("cls");
	 	
	 	
	 	switch (Opcao)
	 	{
	 		default:
	 			cout << "Insira um numero de 0 a 6\n";
	 			system("pause");
	 			break;
			
			case 1:
			 	cout << "Numero a converter: ";
	 			cin >> N1;
	 			QualquerBase_string(N1,2,10);
	 			break;
	 		
	 		case 2:
	 			cout << "Numero a converter: ";
	 			cin >> N1;
	 			QualquerBase_string(N1,10,2);
	 			break;
	 		
	 		case 3:
	 			cout << "Numero a converter: ";
	 			cin >> N1;
	 			QualquerBase_string(N1,10,16);
	 			break;
	 			
	 		case 4:
	 			cout << "Numero a converter: ";
	 			cin >> N1;
	 			QualquerBase_string(N1,10,8);
	 			break;
			
			case 5:
				cout << "Numero a converter: ";
	 			cin >> N1;
	 			QualquerBase_string(N1,8,10);
	 			break;
	 		
			 case 6:
	 			cout << "Numero a converter: ";
	 			cin >> N1;
	 			int X, Y;
	 			cout << "Da base (X) = ";
	 			cin >> X;
	 			cout << "Para base (Y) = ";
	 			cin >> Y;
	 			QualquerBase_string(N1,X,Y);
	 			break;
			
			case 0: return 0;
		}
		system("pause");
		cout << endl;
	}while(Opcao);
}
