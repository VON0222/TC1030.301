/*Este es el header de la clase padre Mapa, esta clase tiene todos los atributos y metodos que
 comparten tanto los mapas interiores y los mapas exteriores.*/
#ifndef MAPA_H
#define MAPA_H

#include <iostream>
#include <string>

using namespace std;

class Mapa{
    private:
        int Tiles;                                          //Solo posee un atributo.
    public:
        Mapa();                                             //Tiene su constructor por default.
        Mapa(int numT);                                     //Y su constructor sobrecargado
        int getTiles();                                     //Tiene su geter y seter.
        void setTiles();
        void creachara();                                   //Y tiene sus metodos que seran sobre escritos 
        void GenerarMapa();                                 //por sus clases hijas.
        void Collapsar();
        void ColocarPersonajes();
};

Mapa::Mapa(){                                               //Constructor por default.
    Tiles = 13;
}

Mapa::Mapa(int numT){                                       //Cnstructor sobrecargado.
    Tiles = numT;
}

int Mapa::getTiles(){                                       //Geter del atributo Tiles.
    return Tiles;
}

void Mapa::setTiles(){                                      //Seter del atributo Tiles.
    int numT;
    cin>>numT;
    Tiles = numT;
}

#endif