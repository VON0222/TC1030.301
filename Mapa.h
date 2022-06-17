/*
 * Proyecto DBD main
 * José Diego Llaca Castro
 * A01704793
 * 16/06/2022
 * Versión: 4
 * Este es el header de la clase padre Mapa, esta clase tiene todos los 
 * atributos y metodos que comparten tanto los mapas interiores y los 
 * mapas exteriores.
 */

#ifndef MAPA_H
#define MAPA_H

#include <iostream>
#include <string>

using namespace std;

class Mapa{
    private:
    //Declaro las variables privadas de instancia.
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

/**
 * Mapa es un constructor por default de la clase Mapa.
 * 
 * Construye un objeto de clase Mapa con valores predeterminados.
 * 
 * @param
 * @return
 */

Mapa::Mapa(){                                               
    Tiles = 13;
}

/**
 * Mapa es un constructor de la clase Mapa.
 * 
 * Construye un objeto de clase Mapa usando como parametro numT.
 * 
 * @param numT 
 * @return
 */

Mapa::Mapa(int numT){                                       
    Tiles = numT;
}

/**
 * getTiles devuelve el valor de Tiles.
 * 
 * Al llamar este método devuelve el valor de Tiles el cual es int.
 * 
 * @param
 * @return int 
 */

int Mapa::getTiles(){                                       
    return Tiles;
}

/**
 * setTiles da un valor a Tiles.
 * 
 * Al llamar este método pide al usuario un int para guardar en Tiles.
 * 
 * @param 
 * @return
 */

void Mapa::setTiles(){                                      
    int numT;
    cin>>numT;
    Tiles = numT;
}

#endif