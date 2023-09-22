#include <string>
#include <iostream>
class mascota
{
private:
    int vida;
    std::string nombre;

public:
Mascota(){ this->vida = 100;} //constructor
    void EstablecerNombre(std::string nombre) {
       
        this->nombre = nombre; 
    }
    ~Mascota() {} //destructor
    void DecirNombre()
    {
        std::cout << "Mi nombre es: " << this->nombre << std::endl;
    }
};