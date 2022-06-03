#ifndef MAPAEXT_H
#define MAPAEXT_H

#include "Mapa.h"
#include "Superviviente.h"
#include "Asesino.h"
#include "Personaje.h"
#include <iostream>
#include <string>

using namespace std;

const int MaxE = 5;

class MapaExt : public Mapa{
    private:
        string MainTile;
        int numcharE;
        Personaje * charaE[MaxE];
    public:
        MapaExt():Mapa(){
            MainTile = "Unknown";
            numcharE = 0;
        }

        MapaExt(int numT, string MainT):Mapa(numT){
            MainTile = MainT;
            numcharE = 0;
        }

        string getMainTile();
        void setMainTile();
        void creachara();
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

void MapaExt::creachara(){
    charaE[numcharE] = new Asesino("Huntress", 1.80, 110, 32, "Hatchets");
    numcharE++;
    charaE[numcharE] = new Superviviente("Nea", 1.60, 100, "sano");
    numcharE++;
    charaE[numcharE] = new Superviviente("David", 1.70, 95, "sano");
    numcharE++;
    charaE[numcharE] = new Superviviente("Jane", 1.60, 110, "sano");
    numcharE++;
    charaE[numcharE] = new Superviviente("Johna", 1.70, 100, "sano");
    numcharE++;
}

void MapaExt::GenerarMapa(){
    cout<<"El mapa ha sido generado!"<<endl;
}

void MapaExt::Collapsar(){
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;
}

void MapaExt::ColocarPersonajes(){
    for (int i = 0; i < 5; i++)
        cout<<charaE[i] -> to_string();
    cout<<"Los personajes estan en el mapa"<<endl;
}

#endif