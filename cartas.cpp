/*
Nombre del archivo: cartas.cpp
Descripcion: en este archivo esta el programa para imprimir cartas de la baraja inglesa
Autor: Erik Alexander Castro Barraza
Fecha:20/09/2024
*/



#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#define MAX_H 120

void MarcoSimple(int ancho,int alto,short x,short y);
void MoverCursor(short x, short y);
void ImprimirCarta(int ancho,int alto,short x,short y);

using namespace std;

enum {BV=179,ESD=191,EII,BH=196,EID=217,ESI};


int main(){
    MarcoSimple(11,11,5,5);


return 0;
}

void MarcoSimple(int ancho, int alto,short x, short y){
    MoverCursor(x,y);
    cout<<char(ESI);
    for(int i=0;i<=ancho-1;i++) cout<<char(BH);
    cout<<char(ESD);
    MoverCursor(x,y+1);
    for(int n=0;n<alto;n++){
    cout<<char(BV);
    for(int i=0;i<=ancho-1;i++)cout<<" ";
    cout<<char(BV);
    MoverCursor(x,y+n+1);
    }
    cout<<char(EII);
    for(int i=0;i<=ancho-1;i++) cout<<char(BH);
    cout<<char(EID)<<endl;
    ImprimirCarta(ancho,alto,x,y);


}



void MoverCursor(short x, short y){
  	COORD coord = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void ImprimirCarta(int ancho,int alto,short x,short y){
    srand(time(NULL));
    int n=10;
    char f=char(3);
    MoverCursor(x+1,y+1);
    cout<<n;
    MoverCursor(x+1,y+2);
    cout<<f;
    MoverCursor(x+ancho-1,y+alto-1);
    cout<<n;
    MoverCursor(x+ancho,y+alto-2);
    cout<<f;
    MoverCursor(x+ancho,y+alto);
    cout<<endl;
    switch (n){
        case 1:
            MoverCursor(x+1+ancho/2,y+1+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 2:
            MoverCursor(x+1+ancho/2,y-1+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 3:
            MoverCursor(x+1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y+1+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y+4+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 4:
            MoverCursor(x-1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+3+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+3+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 5:
            MoverCursor(x-1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+3+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+3+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 6:
            MoverCursor(x-1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+1+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+4+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+1+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+4+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 7:
            MoverCursor(x-1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y-1+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 8:
            MoverCursor(x-1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y-1+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 9:
            MoverCursor(x-1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y-1+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-1+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+1+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+1+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;

        case 10:
            MoverCursor(x-1+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+2+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y-1+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y-1+ancho/2);
            cout<<f;
            MoverCursor(x-1+ancho/2,y+1+ancho/2);
            cout<<f;
            MoverCursor(x+3+ancho/2,y+1+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y-1+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho/2,y+ancho/2);
            cout<<f;
            MoverCursor(x+1+ancho,y+1+alto);
            cout<<endl;
            break;










    }


}

