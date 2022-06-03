#ifndef MAPAINT_H
#define MAPAINT_H

#include "Mapa.h"
#include "Superviviente.h"
#include "Asesino.h"
#include "Personaje.h"
#include <iostream>
#include <string>

using namespace std;

const int MaxI = 5;

class MapaInt : public Mapa{
    private:
        int Pisos;
        int numcharI;
        Personaje * charaI[MaxI];
    public:
        MapaInt():Mapa(){
            Pisos = 2;
            numcharI = 0;
        }

        MapaInt(int numT, int numP):Mapa(numT){
            Pisos = numP;
            numcharI = 0;
        }

        int getPisos();
        void setPisos();
        void creachara();
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

void MapaInt::creachara(){
    charaI[numcharI] = new Asesino("Ghostface", 1.60, 80, 32, "Nightshroud");
    numcharI++;
    charaI[numcharI] = new Superviviente("Tapp", 1.70, 90, "sano");
    numcharI++;
    charaI[numcharI] = new Superviviente("Laurie", 1.60, 105, "sano");
    numcharI++;
    charaI[numcharI] = new Superviviente("Leon", 1.70, 90, "sano");
    numcharI++;
    charaI[numcharI] = new Superviviente("Jill", 1.65, 100, "sano");
    numcharI++;
}

void MapaInt::GenerarMapa(){
    cout<<"El mapa ha sido generado!"<<endl;
}

void MapaInt::Collapsar(){
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;
}

void MapaInt::ColocarPersonajes(){
    for (int i = 0; i < 6; i++)
        cout<<charaI[i] -> to_string();
    cout<<"Los personajes estan en el mapa"<<endl;
}

#endif