/*
 * Proyecto DBD main
 * José Diego Llaca Castro
 * A01704793
 * 16/06/2022
 * Versión: 5
 * Este es el header de la clase hija MapaInt, esta clase hereda todos 
 * los atributos y metodos de la clase Mapa, sobre escribe algunos 
 * metodos e implementa un metodo el cual usa polimorfismo para imprimir
 * los datos de los personajes dentro del mapa.
 */

#ifndef MAPAINT_H
#define MAPAINT_H

#include "Mapa.h"               //biblioteca con mis objetos a usar.
#include "Superviviente.h"      //biblioteca con mis objetos a usar.
#include "Asesino.h"            //biblioteca con mis objetos a usar.
#include "Personaje.h"          //biblioteca con mis objetos a usar.
#include <iostream>
#include <string>

using namespace std;

const int MaxI = 5;                                         //Constante de tamaño de arreglos.
                                                            //de personajes que pueden haber en el mapa.
class MapaInt : public Mapa{                                //La clase hereda de la clase Mapa.    
    private:
    //Declaro las variables privadas de instancia.
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
        void GenerarMapa();                                 //Tiene los metodos heredados los cuales esta vez
        void Collapsar();                                   //si declara.
        void ColocarPersonajes();
};

/**
 * getPisos devuelve el valor de Pisos.
 * 
 * Al llamar este método devuelve el valor de Pisos el cual es int.
 * 
 * @param
 * @return int 
 */

int MapaInt::getPisos(){                                    
    return Pisos;
}

/**
 * setPisos da un valor a Pisos.
 * 
 * Al llamar este método pide al usuario un int para guardar en Pisos.
 * 
 * @param 
 * @return
 */

void MapaInt::setPisos(){                                   
    int numP;
    cin>>numP;
    Pisos = numP;
}

/**
 * creachara crea objetos en charaI[].
 * 
 * genera objetos de tipo Asesino y Superviviente y los
 * guarda en la variable de instancia en charaI[] (arreglo de 
 * Personajes) para poder generar un mapa interior.
 * 
 * @param 
 * @return
 */

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

/**
 * GenerarMapa imprime la generación del mapa.
 * 
 * Al llamar esta función se imprime que el mapa ha sido generado.
 * 
 * @param 
 * @return
 */

void MapaInt::GenerarMapa(){                                 
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

void MapaInt::Collapsar(){                                  
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;    
}    

/**
 * ColocarPersonajes imprime los personajes en el mapa y avisa 
 * cuando termina.
 * 
 * Utiliza el arreglo charaI[], para recorre todo el arreglo 
 * imprimiendo cada uno de los objetos con su método to_string()
 * 
 * @param 
 * @return
 */

void MapaInt::ColocarPersonajes(){ 
    //Ciclo que recorre el arreglo e imprime cada objeto.                         
    for (int i = 0; i < 5; i++)                              
        cout<<charaI[i] -> to_string();                     
    cout<<"Los personajes estan en el mapa"<<endl;          
}

#endif