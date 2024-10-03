/*
Nombre del archivo: craps.cpp
Descripcion: en este archivo se encuentra el programa del juego de craps
Autor: Erik Alexander Castro Barraza
Fecha:18/09/2024
*/



#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main(){
    enum {SALIR,JUEGO};
    int d1,d2,punto,op;
    srand(time(NULL));


    do{
        system("cls");
        cout<<"Bienvenido al juego de craps."<<endl;
        cout<<"Inicia el juego:"<<endl<<"Primera ronda..."<<endl<<"Presiona cualquier tecla para tirar un par de dados"<<endl;
        system("pause");
        d1=rand()%6+1;
        d2=rand()%6+1;
        cout<<"Lanzamiento: "<<d1<<"+"<<d2<<"="<<d1+d2<<endl;
        if (d1+d2==11||d1+d2==7) cout<<"\255Felicidades, has ganado!";
        else if (d1+d2==2||d1+d2==3||d1+d2==12) cout<<"\255Lo siento, has perdido!";
        else{
            punto=d1+d2;
            cout<<"Has pasado a la segunda ronda.El punto es "<<punto<<endl<<"Debe repetir el punto para ganar, si antes sale un 7 pierdes..."<<endl<<"Segunda ronda..."<<endl;
            do{
                cout<<"Presiona cualquier tecla para tirar un par de dados"<<endl;
                system("pause");
                d1=rand()%6+1;
                d2=rand()%6+1;
            cout<<"Lanzamiento: "<<d1<<"+"<<d2<<"="<<d1+d2<<endl;
            }while(d1+d2!=punto&&d1+d2!=7);
            if (d1+d2==punto) cout<<"\255Felicidades, has ganado!"<<endl;
            else cout<<"\255Lo siento, has perdido!"<<endl;
        }
            cout<<"\250deseas salir del juego o seguir jugando?"<<endl;
            cout<<SALIR<<")Salir"<<endl<<JUEGO<<")Seguir jugando"<<endl;
            do{
            cin>>op;
            if (op<SALIR||op>JUEGO) cout<<"Introduce una opcion valida:";
            }while (op<SALIR||op>JUEGO);
    }while (op!=SALIR);


return 0;
}
