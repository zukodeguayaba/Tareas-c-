/*
Nombre del archivo: VolumenEsfera.cpp
Descripcion: este programa calcula el volumen de una esfera
Autor: Erik Alexander Castro Barraza
Fecha:15/08/2024




*/



#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

int main(){
    float radio;
    double pi,volumen;
    pi=3.141592653589;


    cout<<"programa para calcular el volumen de una esfera\n"<<"radio: ";
    cin>>radio;
    volumen=4.0/3.0*pi*pow(radio,3);
    cout<<"el volumen de la esfera de radio "<<radio<<" es de: "<<volumen<<"u^3";




return 0;
}
