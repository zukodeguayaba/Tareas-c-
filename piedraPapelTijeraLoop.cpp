/*
Nombre del archivo:piedraPapelTijeraLoop.cpp
Descripcion:juego de ppt que para de jugar hasta que le dices que pare
Autor: Erik Alexander Castro Barraza
Fecha:31/08/2024




*/



#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    enum {SALIR,PIEDRA,PAPEL,TIJERA};
    int maquina,usuario,W=0,L=0,E=0;
    srand(time(NULL));


    do {
        system("cls");
        cout<<"Bienvenido usuario, este es el juego de piedra papel o tijeras ahora elige"<<endl;
        cout<<endl;
        cout<<"0)salir"<<endl<<"1) piedra"<<endl<<"2) papel"<<endl<<"3) tijera"<<endl;
        cout<<endl<<"Elige: "<<endl;
        cin>>usuario;
        if (usuario==PIEDRA||usuario==PAPEL||usuario==TIJERA){
            maquina=rand()%3+1;
            cout<<"la maquina eligio: ";
            switch (maquina){
                case PIEDRA:cout<<"piedra"<<endl;
                    break;
                case PAPEL:cout<<"papel"<<endl;
                    break;
                case TIJERA:cout<<"tijera"<<endl;
                    break;
                        }


            switch (usuario){

                case PIEDRA:
                    switch (maquina){
                            case PIEDRA:cout<<"empate";
                            E=E+1;
                            break;
                            case PAPEL:cout<<"perdiste";
                            L=L+1;
                            break;
                            case TIJERA:cout<<"ganaste";
                            W=W+1;
                            break;
                    }
                        break;
                case PAPEL:
                    switch (maquina){
                            case PIEDRA:cout<<"ganaste";
                            W=W+1;
                            break;
                            case PAPEL:cout<<"empate";
                            E=E+1;
                            break;
                            case TIJERA:cout<<"perdiste";
                            L=L+1;
                            break;
                    }
                    break;
                case TIJERA:
                    switch (maquina){
                            case PIEDRA:cout<<"perdiste";
                            L=L+1;
                            break;
                            case PAPEL:cout<<"ganaste";
                            W=W+1;
                            break;
                            case TIJERA:cout<<"empate";
                            E=E+1;
                            break;
                    }
                    break;


            }

        }else if (usuario==SALIR) cout<<"GANASTE:"<<W<<" veces"<<endl<<"PERDISTE:"<<L<<" veces"<<endl<<"EMPATASTE:"<<E<<" veces"<<endl<<"Vuelve pronto :)";
        else cout<<"Error, introduce un numero valido"<<endl;
        cout<<endl<<endl;
        system("pause");
    } while (usuario!=0);


return 0;
}
