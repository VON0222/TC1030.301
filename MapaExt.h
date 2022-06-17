/*
 * Proyecto DBD main
 * José Diego Llaca Castro
 * A01704793
 * 16/06/2022
 * Versión: 5
 * Este es el header de la clase hija MapaExt, esta clase hereda todos 
 * los atributos y metodos de la clase Mapa, sobre escribe algunos 
 * metodos e implementa un metodo el cual usa polimorfismo para imprimir
 * los datos de los personajes dentro del mapa.
 */

#ifndef MAPAEXT_H
#define MAPAEXT_H

#include "Mapa.h"               //biblioteca con mis objetos a usar.
#include "Superviviente.h"      //biblioteca con mis objetos a usar.
#include "Asesino.h"            //biblioteca con mis objetos a usar.
#include "Personaje.h"          //biblioteca con mis objetos a usar.
#include <iostream>
#include <string>

using namespace std;

const int MaxE = 5;                                         //Constante de tamaño de arreglos.
                                                            //de personajes que pueden haber en el mapa.
class MapaExt : public Mapa{                                //La clase hereda de la clase Mapa.
    private:
    //Declaro las variables privadas de instancia.
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

/**
 * getMainTile devuelve el valor de MainTile.
 * 
 * Al llamar este método devuelve el valor de MainTile el cual es 
 * un string.
 * 
 * @param
 * @return string 
 */

string MapaExt::getMainTile(){                              
    return MainTile;
}

/**
 * setMainTile da un valor a MainTile.
 * 
 * Al llamar este método pide al usuario un string para guardar 
 * en MainTile.
 * 
 * @param
 * @return
 */

void MapaExt::setMainTile(){                                
    string MainT;
    cin>>MainT;
    MainTile = MainT;
}

/**
 * creachara crea objetos en charaE[].
 * 
 * Genera objetos de tipo Asesino y Superviviente y los
 * guarda en la variable de instancia en charaE[] (arreglo de 
 * Personajes) para poder generar un mapa exterior.
 * 
 * @param 
 * @return
 */

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

/**
 * GenerarMapa imprime la generación del mapa.
 * 
 * Al llamar esta función se imprime que el mapa ha sido generado.
 * 
 * @param 
 * @return
 */

void MapaExt::GenerarMapa(){                                
    cout<<"El mapa ha sido generado!"<<endl;                
}

/**
 * Collapsar imprime el colapso del mapa. 
 * 
 * Al llamar este metodo se imprime que el mapa esta colapsandose
 * y cuanto tiempo tardara en terminar.
 * 
 * @param 
 * @return
 */

void MapaExt::Collapsar(){                                  
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;    
}                                                           

/**
 * ColocarPersonajes imprime los personajes en el mapa y avisa 
 * cuando termina.
 * 
 * Utiliza el arreglo charaE[], para recorre todo el arreglo 
 * imprimiendo cada uno de los objetos con su método to_string()
 * 
 * @param 
 * @return
 */

void MapaExt::ColocarPersonajes(){ 
    //Ciclo que recorre el arreglo e imprime cada objeto.                         
    for (int i = 0; i < 5; i++)                             
        cout<<charaE[i] -> to_string();                     
    cout<<"Los personajes estan en el mapa"<<endl;          
}

#endif