#include <Jugador.hpp>
#include <iostream>   //cntrl k cntrl q
#include <unistd.h>

using namespace std; 

class Demo{
    private:
        int x;
        int y;
}

int main(int argc, char const *argv[])
{

    cout<<"Tamaño int: "<<sizeof(int)<<endl;
    int a=5;
    cout<<"Direccion a :"<<&a<<endl;
    cout<<"Tamaño a"<<sizeof(int)<<endl;

        Demo b;
    cout<<"Direccion b :"<<&a<<endl;
    cout<<"Tamaño    b: "<<sizeof(int)<<endl;
    int* direccion = (int*)malloc(4);
    cout<<"Malloc antes : " << direccion <<endl;
    direccion += 1;    //sube un entero (4bytes) en memoria
    cout<<"malloc despues :" << direccion <<endl;
    direccion -= 1;

    *direccion = 5;
    cout<<"Contenido direccion = "<<*direccion<<endl;
    cout<<"Operador new:"<<new Jugador()<<endl;
    Jugador* vac = new Jugador();
    cout<<"Nueva Jugador"<<vac<<endl;

}