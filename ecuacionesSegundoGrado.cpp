/*
Nombre del archivo: ecuacionesSegundoGrado.cpp
Descripcion: este archivo contiene un programa que te da las soluciones de una ecuacion de segundo grado de la forma ax^2+bz+c=0
Autor: Erik Alexander Castro Barraza
Fecha: 22/08/2024




*/



#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int s=0;
    double a,b,c,x1,x2,i1,i2;
    cout<<setprecision(6)<<fixed;
    cout<<"este programa te ayuda a calcular las soluciones de una ecuacion de segundo grado de la forma ax^2+bz+c="<<endl;
    cout<<"porfavor introduce el valor de a: ";
    cin>>a;
    cout<<"porfavor introduce el valor de b: ";
    cin>>b;
    cout<<"porfavor introduce el valor de c: ";
    cin>>c;

    if (a==0) s=1;
    else {
        if ((pow(b,2)-4*a*c)<0) s=2;
        else s=3;
    }
    //cout<<s;

    switch(s){
        case 1:
            cout<<"error";
            break;

        case 2:
            x1=sqrt(-1.0*(pow(b,2)-4.0*a*c))/(2.0*a);
            x2=-sqrt(-1.0*(pow(b,2)-4.0*a*c))/(2.0*a);
            cout<<"X1= "<<-b/(a*2.0)<<"+"<<x1<<"i"<<endl<<"X2= "<<-b/(a*2.0)<<x2<<"i";
            break;

        case 3:
            x1=(-b+sqrt(pow(b,2)-4.0*a*c))/(2.0*a);
            x2=(-b-sqrt(pow(b,2)-4.0*a*c))/(2.0*a);
            cout<<"X1= "<<x1<<endl<<"X2= "<<x2;
            break;
    }







return 0;
}
