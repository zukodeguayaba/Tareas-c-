/*
Nombre del archivo: piedraPapelTijera
Descripcion: en este archivo está un programa con el que se puede jugar piedra papel o tijera contra la maquina usando numeros random
Autor: Erik Alexander Castro Barraza
Fecha: 29/08/2024




*/



#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    enum {PIEDRA=1,PAPEL,TIJERA};
    int maquina,usuario;
    srand(time(NULL));



    cout<<"Bienvenido usuario, este es el juego de piedra papel o tijeras ahora elige"<<endl;
    cout<<"1) piedra"<<endl<<"2) papel"<<endl<<"3) tijera"<<endl;
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
                        break;
                        case PAPEL:cout<<"perdiste";
                        break;
                        case TIJERA:cout<<"ganaste";
                        break;
                }
                    break;
            case PAPEL:
                switch (maquina){
                        case PIEDRA:cout<<"ganaste";
                        break;
                        case PAPEL:cout<<"empate";
                        break;
                        case TIJERA:cout<<"perdiste";
                        break;
                }
                break;
            case TIJERA:
                switch (maquina){
                        case PIEDRA:cout<<"perdiste";
                        break;
                        case PAPEL:cout<<"ganaste";
                        break;
                        case TIJERA:cout<<"empate";
                        break;
                }
                break;


        }

    }else cout<<"Error, introduce un numero valido";



return 0;
}
