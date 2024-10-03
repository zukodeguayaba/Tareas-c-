/*
Nombre del archivo:minimoCon3Variables.cpp
Descripcion: encontrar el minimo de 3 numeros que el usuario te brinde
Autor: Erik Alexander Castro Barraza
Fecha:17/08/2024




*/



#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int numero1,numero2, numero3;
    cout<<endl;
    cout<<"El prop\242sito del siguiente programa es encontrar el valor m\241nimo entre 2 n\243meros\n\n";
    cout<<"Introduce por favor el primer n\243mero: ";
    cin>>numero1;
    cout<<"Introduce por favor el segundo n\243mero: ";
    cin>>numero2;
    cout<<"Introduce por favor el tercer n\243mero: ";
    cin>>numero3;
    cout<<"El m\241nimo es: ";
    if ((numero1<=numero2)&&(numero1<=numero3)) cout<<numero1;
    else if (numero2<=numero3) cout<<numero2;
    else cout<<numero3;
    cout<<endl;



return 0;
}
