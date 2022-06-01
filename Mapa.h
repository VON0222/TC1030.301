#ifndef MAPA_H
#define MAPA_H

#include <iostream>
#include <string>

using namespace std;

class Mapa{
    private:
        int Tiles;
    public:
        Mapa();
        Mapa(int numT);
        int getTiles();
        void setTiles();
        void GenerarMapa();
        void Collapsar();
        void ColocarPersonajes();
};

Mapa::Mapa(){
    Tiles = 13;
}

Mapa::Mapa(int numT){
    Tiles = numT;
}

int Mapa::getTiles(){
    return Tiles;
}

void Mapa::setTiles(){
    int numT;
    cin>>numT;
    Tiles = numT;
}

#endif