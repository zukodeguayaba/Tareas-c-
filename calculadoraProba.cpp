/*
Nombre del archivo: calculadoraProba.cpp
Descripcion: en este archivo se encuentra el programa de una calculadora de probabilidad que te calcula el factorial, combinaciones y permutaciones.
Autor: Erik Alexander Castro Barraza
Fecha:16/09/2024
*/



#include <iostream>
#include <cstdlib>
#include <iomanip>
#define MAX_FAC 1754

enum {SALIDA,FAC,COM,PER};

long double Factorial(int n);
long double Combinacion(int n,int r);
long double Permutacion(int n,int r);
float Menu(int op);
void GestionarFactorial();
void GestionarCombinacion();
void GestionarPermutacion();

using namespace std;

int main(){

    float op;
    do{
        system("cls");
        op=Menu(op);

        switch (int (op)){
            case FAC:
                GestionarFactorial();
                break;

            case COM:
                GestionarCombinacion();
                break;

            case PER:
                GestionarPermutacion();
                break;

            default:
               if (op!=SALIDA) cout<<"Introduce una opci\242n v\240lida"<<endl;
        }
        system("pause");

    }while (op!=SALIDA);
return 0;
}

long double Factorial (int n){
    long double fact=1;
    for (int i=2;i<=n;i++) fact*=i;
    return fact;
}

long double Combinacion(int n, int r){
    return Factorial(n)/(Factorial(r)*Factorial(n-r));
}

long double Permutacion(int n, int r){
    return Factorial(n)/Factorial(n-r);
}
float Menu(int op){
    cout<<"Hola usuario, este progama es una calculadora que te ayuda a calcular diversas operaciones probabilisticas"<<endl
        <<SALIDA<<")Salir"<<endl<<FAC<<")Factorial"<<endl<<COM<<")Combinaci\242n"<<endl<<PER<<")Permutaci\242n"<<endl<<"\250Qu\202 deseas hacer?"<<endl;
    cout<<"En todos los casos el n\243mero mas grande que se puede introducir es "<<MAX_FAC<<endl;
    do{
        cin>>op;
    }while (op-int(op)>0);

    return op;
}
void GestionarFactorial(){
    int n;
    cout<<"Introduce el n\243mero al que le quieres calcular el factorial: "<<endl;

    do{
        cin>>n;
    }while (n>MAX_FAC);

    cout<<"El factorial de "<<n<<" es: "<<setprecision(0)<<fixed<<Factorial(n)<<endl;
}
void GestionarCombinacion(){
    int n,r;
    cout<<"Combinaciones de n en r"<<endl;

    do{
        cout<< "Introduce n:";
        cin>>n;
    }while (n<0||n>MAX_FAC);

    do{
        cout<<"Ahora introduce r:";
        cin>>r;
    }while (n<r||r<0);
    cout<<"La cantidad de "<<n<<" elementos tomados de "<<r<<" en "<<r<<" es de: "<<Combinacion(n,r)<<endl;
}
void GestionarPermutacion(){
    int r,n;
    cout<<"Permutaciones de n en r lugares"<<endl;
    do{
        cout<< "Introduce n:";
        cin>>n;
    }while (n<0||n>MAX_FAC);
    do{
        cout<<"Ahora introduce r:";
        cin>>r;
    }while (n<r||r<0);
    cout<<"La cantidad de formas en las que se pueden ordenar "<<n<<" objetos "<<" en "<<r<<" lugares es de: "<<Permutacion(n,r)<<endl;
}
