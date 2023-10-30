#pragma once
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;

class Player
{
private:
    fstream ImagenPlayerASCII[3]; 
    bool is_open[3];
public:
    Player(/* args */)
    {
        ImagenPlayerASCII[0].open("./data/Player.txt", ios::in);
        is_open[0] =  ImagenPlayerASCII[0].is_open();
        ImagenPlayerASCII[1].open("./data/PlayerRun.txt", ios::in);
        is_open[1] =  ImagenPlayerASCII[1].is_open();
        ImagenPlayerASCII[2].open("./data/PlayerJump.txt", ios::in);
        is_open[2] =  ImagenPlayerASCII[2].is_open();
        
    }
    void DibujarEstado(int opc)
    {
        if (opc >= 0 && opc <= 2)
        {
            if (is_open[opc])
            {
                string line;
                while (getline(ImagenPlayerASCII[opc], line))
                {
                    cout << line << endl;
                }
            }
            else
            {
                cout << "No se cargo el archivo de la imagen";
            }
        }
        else
        {
            cout << "No existe la opcion selecionada" << endl;
        }

    }

    ~Player()
    {
        for (int i = 2; i < 0; i--)
        {
            ImagenPlayerASCII[i].close();
        }

    }
};