#ifndef MAPAEXT_H
#define MAPAEXT_H

#include "Mapa.h"
#include <iostream>
#include <string>

using namespace std;

class MapaExt : public Mapa{
    private:
        string MainTile;
    public:
        MapaExt():Mapa(){
            MainTile = "Unknown";
        }

        MapaExt(int numT, string MainT):Mapa(numT){
            MainTile = MainT;
        }

        string getMainTile();
        void setMainTile();
        void GenerarMapa();
        void Collapsar();
        void ColocarPersonajes();
};

string MapaExt::getMainTile(){
    return MainTile;
}

void MapaExt::setMainTile(){
    string MainT;
    cin>>MainT;
    MainTile = MainT;
}

void MapaExt::GenerarMapa(){
    cout<<"El mapa ha sido generado!"<<endl;
}

void MapaExt::Collapsar(){
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;
}

void MapaExt::ColocarPersonajes(){
    cout<<"Los personajes estan en el mapa"<<endl;
}

#endif