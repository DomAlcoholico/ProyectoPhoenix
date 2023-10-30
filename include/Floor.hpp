#pragma once
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <HitBox.hpp>

using namespace std;

class Floor : public Dibujo //, public Actualizable , public HitBox
{
private:
    /* data */

public:
    Floor () : Dibujo("floor")//,HitBox(this->posicion.LeerX(),this->posicion.LeerY(),12,4)
    {
        this->posicion = Vector();
    }
    Floor(int x, int y):Dibujo("floor")//,HitBox(this->posicion.LeerX(),this->posicion.LeerY(),12,4)
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

    ~Floor() 
    {

    }
};