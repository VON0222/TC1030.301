/*Este es el header de la clase hija MapaExt, esta clase hereda todos los atributos y metodos de la clase Mapa,
 sobre escribe algunos metodos e implementa un metodo el cual usa polimorfismo para imprimir los datos de los 
 personajes dentro del mapa.*/
#ifndef MAPAEXT_H
#define MAPAEXT_H

#include "Mapa.h"
#include "Superviviente.h"
#include "Asesino.h"
#include "Personaje.h"
#include <iostream>
#include <string>

using namespace std;

const int MaxE = 5;                                         //Se declara un int constante el cual es el maximo
                                                            //de personajes que pueden haber en el mapa.
class MapaExt : public Mapa{                                //La clase recibe herencia de la clase Mapa.
    private:
        string MainTile;                                    //Tiene sus atributos, ademas de los heredados por
        int numcharE;                                       //la clase mapa.
        Personaje * charaE[MaxE];                           //Se crea un apuntador a un array de tipo Personaje
    public:                                                 //para polimorfismo.
        MapaExt():Mapa(){                                   //Tiene su constructor por default.
            MainTile = "Unknown";
            numcharE = 0;
        }

        MapaExt(int numT, string MainT):Mapa(numT){         //Tiene su constructor sobrecargado
            MainTile = MainT;
            numcharE = 0;
        }

        string getMainTile();                               //Tiene su geter y seter.
        void setMainTile();
        void creachara();                                   //Tiene un metodo que crea personajes para el mapa.
        void GenerarMapa();                                 //Tiene los metodos heredado los cuales esta vez
        void Collapsar();                                   //si declara.
        void ColocarPersonajes();
};

string MapaExt::getMainTile(){                              //Geter del atributo MainTile.
    return MainTile;
}

void MapaExt::setMainTile(){                                //Seter del atributo MainTile.
    string MainT;
    cin>>MainT;
    MainTile = MainT;
}

void MapaExt::creachara(){                                                      //Metodo que crea personajes en
    charaE[numcharE] = new Asesino("Huntress", 1.80, 110, 32, "Hatchets");      //la memoria dinamica para
    numcharE++;                                                                 //implementar polimorfismo.
    charaE[numcharE] = new Superviviente("Nea", 1.60, 100, "sano");
    numcharE++;
    charaE[numcharE] = new Superviviente("David", 1.70, 95, "sano");
    numcharE++;
    charaE[numcharE] = new Superviviente("Jane", 1.60, 110, "sano");
    numcharE++;
    charaE[numcharE] = new Superviviente("Johna", 1.70, 100, "sano");
    numcharE++;
}

void MapaExt::GenerarMapa(){                                //Se sobre escribe el metodo GenerarMapa que
    cout<<"El mapa ha sido generado!"<<endl;                //imprime que el mapa ha sido generado.
}

void MapaExt::Collapsar(){                                  //Se sobre escribe el metodo Collapsar que
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;    //imprime el tiempo en el cual el mapa se
}                                                           //autodestruira.

void MapaExt::ColocarPersonajes(){                          //Se sobre escribe el metodo ColocarPersonajes
    for (int i = 0; i < 5; i++)                             //que imprime los datos de todos los personajes
        cout<<charaE[i] -> to_string();                     //usando polimorfismo y al terminar imprime
    cout<<"Los personajes estan en el mapa"<<endl;          //que todos los personajes estan en el mapa.
}

#endif