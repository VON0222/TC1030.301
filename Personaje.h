/*Este es el header de la clase padre Personaje, esta clase tiene todos los atributos y metodos 
que comparten tanto Asesino como Superviviente y da lugar a que haya sobre escritura de metodos 
y polimorfismo a traves de la clase abstracta aqui declarada.*/
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>

using namespace std;

class Personaje{
    private:
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

Personaje::Personaje(){                                             //Constructor por default.
    Nombre = "default";
    Altura = 1.80;
    Volumen = 100;
}

Personaje::Personaje(string nom, float h, int vol){                 //Constructor.
    Nombre = nom;
    Altura = h;
    Volumen = vol;
}

string Personaje::getNombre(){                                      //Geter del atributo Nombre.
    return Nombre;
}

void Personaje::setNombre(){                                        //Seter del atributo Nombre.
    string nom;
    cin>>nom;
    Nombre = nom;
}

float Personaje::getAltura(){                                       //Geter del atributo Altura.
    return Altura;
}

void Personaje::setAltura(){                                        //Seter del atributo Altura.
    float h;
    cin>>h;
    Altura = h;
}

int Personaje::getVolumen(){                                        //Geter del atributo Volumen.
    return Volumen;
}

void Personaje::setVolumen(){                                       //Seter del atributo Volumen.
    int vol;
    cin>>vol;
    Volumen = vol;
}

#endif