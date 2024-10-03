/*
Nombre del archivo: aguaHermosillo.cpp
Descripcion: el programa en este archivo te ayuda a calcular el precio a pagar por el servicio de agua dependiendo del consumo
Autor: Erik Alexander Castro Barraza
Fecha:25/08/2024




*/



#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    float metrosC,total,metrosR;
    int c,e;
    do {
        cout<<"Introduce el tu consumo de agua en m^3 para calcular el cobro que se te har\240: "<<endl;
        cin>>metrosC;
        metrosR=metrosC;
        if (0<metrosC) {
            total=104.57;
            if (metrosC>10) c=1;
            if (metrosC>15) c=2;
            if (metrosC>30) c=3;
            if (metrosC>35) c=4;
            if (metrosC>50) c=5;
            if (metrosC>65) c=6;
            if (metrosC>75) c=7;

            switch (c){
            case 1:
                total=total+(metrosC-10)*10.40;
                break;
            case 2:
                total=total+(10.4*5)+(metrosC-15)*13.47;
                break;
            case 3:
                total=total+(10.4*5)+(13.47*15)+(metrosC-30)*13.69;
                break;
            case 4:
                total=total+(10.4*5)+(13.47*15)+(13.69*5)+(metrosC-35)*20.86;
                break;
            case 5:
                total=total+(10.4*5)+(13.47*15)+(13.69*5)+(20.86*15)+(metrosC-50)*65.59;
                break;
            case 6:
                total=total+(10.4*5)+(13.47*15)+(13.69*5)+(20.86*15)+(65.59*15)+(metrosC-65)*66.74;
                break;
            case 7:
                total=total+(10.4*5)+(13.47*15)+(13.69*5)+(20.86*15)+(65.59*15)+(66.74*10)+(metrosC-75)*71.76;
                break;

            }
            cout<<"En total son $"<<total<<" por tu consumo de "<<int(metrosC)<<" metros^3"<<endl;

        }else cout<<"Error, introduce un n\243mero v\240lido"<<endl;


        cout<<"\250Gustas calcular de nuevo para otro consumo de agua?"<<endl;
        cout<<"1) Si"<<endl<<"0) No"<<endl;
        cin>>e;
        if (e==0) e=0;
    } while (e!=0);

    cout<<"Ten lindo d\241a";


return 0;
}
