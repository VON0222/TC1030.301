/*Este es el header de la clase hija MapaInt, esta clase hereda todos los atributos y metodos de la clase Mapa,
 sobre escribe algunos metodos e implementa un metodo el cual usa polimorfismo para imprimir los datos de los 
 personajes dentro del mapa.*/
#ifndef MAPAINT_H
#define MAPAINT_H

#include "Mapa.h"
#include "Superviviente.h"
#include "Asesino.h"
#include "Personaje.h"
#include <iostream>
#include <string>

using namespace std;

const int MaxI = 5;                                         //Se declara un int constante el cual es el maximo
                                                            //de personajes que pueden haber en el mapa.
class MapaInt : public Mapa{                                //La clase recibe herencia de la clase Mapa.    
    private:
        int Pisos;                                          //Tiene sus atributos, ademas de los heredados por
        int numcharI;                                       //la clase mapa.
        Personaje * charaI[MaxI];                           //Se crea un apuntador a un array de tipo Personaje
    public:                                                 //para polimorfismo.
        MapaInt():Mapa(){                                   //Tiene su constructor por default.
            Pisos = 2;
            numcharI = 0;
        }

        MapaInt(int numT, int numP):Mapa(numT){             //Tiene su constructor sobrecargado
            Pisos = numP;
            numcharI = 0;
        }

        int getPisos();                                     //Tiene su geter y seter.
        void setPisos();                                    
        void creachara();                                   //Tiene un metodo que crea personajes para el mapa.
        void GenerarMapa();                                 //Tiene los metodos heredado los cuales esta vez
        void Collapsar();                                   //si declara.
        void ColocarPersonajes();
};

int MapaInt::getPisos(){                                    //Geter del atributo Pisos.
    return Pisos;
}

void MapaInt::setPisos(){                                   //Seter del atributo Pisos.
    int numP;
    cin>>numP;
    Pisos = numP;
}

void MapaInt::creachara(){                                                      //Metodo que crea personajes en 
    charaI[numcharI] = new Asesino("Ghostface", 1.60, 80, 32, "Nightshroud");   //la memoria dinamica para 
    numcharI++;                                                                 //implementar polimorfismo.
    charaI[numcharI] = new Superviviente("Tapp", 1.70, 90, "sano");
    numcharI++;
    charaI[numcharI] = new Superviviente("Laurie", 1.60, 105, "sano");
    numcharI++;
    charaI[numcharI] = new Superviviente("Leon", 1.70, 90, "sano");
    numcharI++;
    charaI[numcharI] = new Superviviente("Jill", 1.65, 100, "sano");
    numcharI++;
}

void MapaInt::GenerarMapa(){                                //Se sobre escribe el metodo GenerarMapa que 
    cout<<"El mapa ha sido generado!"<<endl;                //imprime que el mapa ha sido generado.      
}

void MapaInt::Collapsar(){                                  //Se sobre escribe el metodo Collapsar que
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;    //imprime el tiempo en el cual el mapa se
}                                                           //autodestruira.

void MapaInt::ColocarPersonajes(){                          //Se sobre escribe el metodo ColocarPersonajes
    for (int i = 0; i < 5; i++)                             //que imprime los datos de todos los personajes 
        cout<<charaI[i] -> to_string();                     //usando polimorfismo y al terminar imprime
    cout<<"Los personajes estan en el mapa"<<endl;          //que todos los personajes estan en el mapa.
}

#endif