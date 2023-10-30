#pragma once
class HitBox
{
private:
    unsigned int x;
    unsigned int y;
    unsigned int dx;
    unsigned int dy;
public:
    HitBox() : HitBox(0,0,0,0){}

    HitBox(unsigned int x,unsigned int y,unsigned int dx,unsigned int dy) {
        this->x = x; //cntrl alt shift = 4 cursores virtuales
        this->y = y; //cntrl alt shift = 4 cursores virtuales
        this->dx = dy; //cntrl alt shift = 4 cursores virtuales
        this->dx = dx; //cntrl alt shift = 4 cursores virtuales
    }
    ~HitBox() {}

    bool Colision(HitBox hitbox){
        int der1 = this->x + this->dx;
        int der2 = hitbox.x + hitbox.dx;

        int izq1 = this->x;
        int izq2 = hitbox.x;

        if(der1 > izq2 )
            return true;
        if(izq1 < der2)
            return true;
   
        return false;
    }
    
};