#ifndef MAPAINT_H
#define MAPAINT_H

#include "Mapa.h"
#include <iostream>
#include <string>

using namespace std;

class MapaInt : public Mapa{
    private:
        int Pisos;
    public:
        MapaInt():Mapa(){
            Pisos = 2;
        }

        MapaInt(int numT, int numP):Mapa(numT){
            Pisos = numP;
        }

        int getPisos();
        void setPisos();
        void GenerarMapa();
        void Collapsar();
        void ColocarPersonajes();
};

int MapaInt::getPisos(){
    return Pisos;
}

void MapaInt::setPisos(){
    int numP;
    cin>>numP;
    Pisos = numP;
}

void MapaInt::GenerarMapa(){
    cout<<"El mapa ha sido generado!"<<endl;
}

void MapaInt::Collapsar(){
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;
}

void MapaInt::ColocarPersonajes(){
    cout<<"Los personajes estan en el mapa"<<endl;
}

#endif