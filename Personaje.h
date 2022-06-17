/*
 * Proyecto DBD main
 * José Diego Llaca Castro
 * A01704793
 * 16/06/2022
 * Versión: 4
 * Este es el header de la clase padre Personaje, esta clase tiene todos 
 * los atributos y metodos que comparten tanto Asesino como Superviviente
 * y da lugar a que haya sobre escritura de metodos y polimorfismo a 
 * traves de la clase abstracta aqui declarada.
 */

#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>

using namespace std;

class Personaje{
    private:
    //Declaro las variables privadas de instancia.
        string Nombre;                                              //Los atributos que tiene todo personaje 
        float Altura;                                               //son Nombre, Altura y Volumen.
        int Volumen;
    public:
        Personaje();                                                //Tiene su constructor por default.
        Personaje(string nom, float h, int vol);                    //Y su constructor sobrecargado.
        string getNombre();                                         //Tiene sus geters y seters.
        void setNombre();
        float getAltura();
        void setAltura();
        int getVolumen();
        void setVolumen();                                          
        void caminar();                                             //Y tiene sus metodos los cuales seran 
        void saltarVentana();                                       //sobre escritos en sus clases hijas.
        void interactuarPale();
        virtual string to_string() = 0;                             //Este es el metodo virtual puro, el cual 
};                                                                  //sera usado para implementar polimorfismo.

/**
 * Personaje es un constructor por default de la clase Personaje.
 * 
 * Construye un objeto de clase Personaje con valores predeterminados.
 * 
 * @param
 * @return
 */

Personaje::Personaje(){                                             
    Nombre = "default";
    Altura = 1.80;
    Volumen = 100;
}

/**
 * Personaje es un constructor de la clase Personaje.
 * 
 * Construye un objeto de clase Personaje usando como parametros nom, h y vol.
 * 
 * @param nom
 * @param h
 * @param vol
 * @return
 */

Personaje::Personaje(string nom, float h, int vol){                 
    Nombre = nom;
    Altura = h;
    Volumen = vol;
}

/**
 * getNombre devuelve el valor de Nombre.
 * 
 * Al llamar este método devuelve el valor de Nombre el cual es string.
 * 
 * @return string 
 */

string Personaje::getNombre(){                                      
    return Nombre;
}

/**
 * setNombre da un valor a Nombre.
 * 
 * Al llamar este método pide al usuario un string para guardar en 
 * Nombre.
 * 
 * @param 
 * @return
 */

void Personaje::setNombre(){                                        
    string nom;
    cin>>nom;
    Nombre = nom;
}

/**
 * getAltura devuelve el valor de Altura.
 * 
 * Al llamar este método devuelve el valor de Altura el cual es float.
 * 
 * @param
 * @return float 
 */

float Personaje::getAltura(){                                       
    return Altura;
}

/**
 * setAltura da un valor a Altura.
 * 
 * Al llamar este método pide al usuario un float para guardar en 
 * Altura.
 * 
 * @param 
 * @return 
 */

void Personaje::setAltura(){                                        
    float h;
    cin>>h;
    Altura = h;
}

/**
 * getVolumen devuelve el valor de Volumen.
 * 
 * Al llamar este método devuelve el valor de Volumen el cual es int.
 * 
 * @param
 * @return int 
 */

int Personaje::getVolumen(){                                        
    return Volumen;
}

/**
 * setVolumen da un valor a Volumen.
 * 
 * Al llamar este método pide al usuario un int para guardar en Volumen.
 * 
 * @param 
 * @return
 */

void Personaje::setVolumen(){                                       
    int vol;
    cin>>vol;
    Volumen = vol;
}

#endif