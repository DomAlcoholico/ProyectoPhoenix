#include <iostream>
#include <Jugador.hpp>
#include <unistd.h>
#include <Ventana.hpp> //from ventana.hpp to Ventana.hpp
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>
#include <fstream>
#include <curses.h>
#include <Proyectil.hpp>
#include <Floor.hpp>

using namespace std; 

int main(int argc, char const *argv[])
{
    Floor* Floor1 = new Floor(0, 20);

    Jugador* Jugador1 = new Jugador();
    Jugador* Jugador2 = new Jugador(0, 20);
    Jugador* Jugador3 = new Jugador(30, 50);
    Ventana* ventana = new Ventana();

    list<Dibujo*> dibujos;
    dibujos.push_back(Jugador1);
    dibujos.push_back(Floor1);
    // dibujos.push_back(Jugador2);
    // dibujos.push_back(Jugador3);

    list<Actualizable *> actualizables;
    //actualizables.push_back(Jugador1);

    while (!ventana->DeboCerrar())
    {
        int key = getch();
        if(key == 'a' || key == KEY_LEFT){
            Jugador1->Avanzar();
        }
        if(key == 'd' || key == KEY_RIGHT){
            Jugador1->CambiarDireccion();

        }
        if(key == ' '){
            Proyectil* p = 
                new Proyectil(Jugador1->LeerPosicion());
            dibujos.push_back(p);
            actualizables.push_back(p);
        }
        ventana->Dibujar(dibujos);
        ventana->Actualizar(actualizables);
    }

    return 0;
}