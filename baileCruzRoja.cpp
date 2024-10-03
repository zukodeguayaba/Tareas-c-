/*
Nombre del archivo: baile.cpp
Descripcion: documento con el programa de los asistentes al baile de la cruz roja
Autor: Erik Alexander Castro Barraza
Fecha:08/09/2024

*/



#include <iostream>
#include <cstdlib>
#include <iomanip>
#define w 40

using namespace std;

int main () {
    enum {ALTA=1,SALIR};
    int mujeres=0,hombres=0,c=0;
    float op,edad,aportacion,mini=0,maxi=0,total=0,dH=0,dM=0;
    char sexo;


  do{

      do{
          system("cls");
          cout<< setfill (' ') << setw (50);
          cout<<"Baile anual de la Cruz Roja"<<endl<<endl;
          cout<<"\250Qu\202 quiere hacer?"<<endl;
          cout<<"1. Dar de alta a un asistente"<<endl;
          cout<<"2. Terminar baile"<<endl<<endl;
          cout<<"Introduzca su opci\242n:";
          cin>>op;
        }while (op<ALTA||op>SALIR||op-int(op)>0);

        if (op==ALTA){

            do{
                system("cls");
                cout<<"Edad: ";
                cin>>edad;
            }while (edad-int(edad)>0||edad<=0);

            if (edad>=18){

                do{
                    system("cls");
                    cout<<"Sexo (H o M): ";
                    cin>>sexo;
                }while (sexo!='H'&&sexo!='M'&&sexo!='m'&&sexo!='h');

                if (sexo=='H'||sexo=='h') hombres+=1;
                else mujeres+=1;

                do{
                    system("cls");
                    cout<<"Aportaci\242n voluntaria a la Cruz Roja: ";
                    cin>>aportacion;
                }while (aportacion<0);

                if (aportacion!=0){
                    if (hombres+mujeres==1) mini=aportacion;
                    if (aportacion>maxi) maxi=aportacion;
                    if (aportacion<mini) mini=aportacion;
                    if (sexo=='H'||sexo=='h') dH+=aportacion;
                    else dM+=aportacion;

                    total+=aportacion;

                    if (sexo=='H'||sexo=='h')cout<<"Bienvenido al baile, ten una bonita noche"<<endl;
                    else cout<<"Bienvenida al baile, ten una bonita noche"<<endl;
                    system("pause");
                } else{
                    if (sexo=='H'||sexo=='h') hombres-=1;
                    else mujeres-=1;
                    cout<<"Para poder entrar al baile necesitas dar una aportaci\242n voluntaria, intentalo de nuevo"<<endl;
                    system("pause");
                    }

            }else {
             cout<<"Para darte de alta necesitas tener m\240s de 18 a\244os"<<endl;
            system("pause");
            }
        }


  }while (op!=SALIR);



  system("cls");
  cout<<left<<setw(w)<<"Asistentes al baile: "<< hombres+mujeres<<endl;
  cout<<setw(w)<<"Dinero recaudado: "<< total<<endl;
  cout<<setw(w)<<"Donativo m\240s grande: "<< maxi<<endl;
  cout<<setw(w)<<"Donativo m\240s peque\244o: "<< mini<<endl;
  cout<<setw(w)<<"Caballeros que asistieron: "<<hombres<<endl;
  cout<<setw(w)<<"Damas que asistieron: "<<mujeres<<endl;
  if (hombres==0) hombres=1;//para evitar alguna posible division entre 0
  cout<<setw(w)<<"Donativo promedio en caballeros: "<<dH/hombres<<endl;
  if (mujeres==0) mujeres=1;
  cout<<setw(w)<<"Donativo promedio en damas: "<<dM/mujeres<<endl;



return 0;
}
