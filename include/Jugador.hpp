#pragma once
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <HitBox.hpp>

using namespace std;

class Jugador : public Dibujo //, public Actualizable , public HitBox
{
private:
    /* data */

public:
    Jugador() : Dibujo("player") //,HitBox(this->posicion.LeerX(),this->posicion.LeerY(),12,4)
    {
        this->posicion = Vector();
    }
    Jugador(int x, int y) : Dibujo("player") //,HitBox(this->posicion.LeerX(),this->posicion.LeerY(),12,4)
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }

    // void actualizar()
    // {
    //     this->x = this->posicion.LeerX();
    //     this->y = this->posicion.LeerY();
    //     //this->posicion.CambiarDireccionX();
    // }

    void Avanzar()
    {
        this->posicion.DesplazarX(1);
    }

    void CambiarDireccion()
    {
        this->posicion.CambiarDireccionX();
    }

    Vector LeerPosicion()
    {
        return this->posicion;
    }
    ~Jugador()
    {
    }
};