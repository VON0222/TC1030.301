/*Este es el header de la clase hija Asesino, esta clase hereda todos los atributos y metodos
 de la clase Personaje, sobre escribe algunos metodos e implementa el metodo virtual heredado de la
 clase Personaje.*/
#ifndef ASESINO_H
#define ASESINO_H

#include "Personaje.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Asesino : public Personaje{                           //La clase recibe herencia de la clase Personaje.
    private:
        int RadioTerror;                                    //Tiene dos atributos ademas de los heredados de 
        string NombreHabilidad;                             //personaje.
    public:
        Asesino():Personaje(){                              //Tiene su constructor por default.
            RadioTerror = 32;
            NombreHabilidad = "default";
        }

        Asesino(string nom, float h, int vol, int RT, string NH):Personaje(nom, h, vol){    //Y su constructor
            RadioTerror = RT;                                                               //sobrecargado.
            NombreHabilidad = NH;
        }

        int getRadioTerror();                               //Tiene sus geters y seters.
        void setRadioTerror();
        string getNombreHabilidad();
        void setNombreHabilidad();
        void caminar();                                     //Tiene los metodos heredados los cuales esta vez si
        void saltarVentana();                               //son declarados.
        void interactuarPale();
        void AtaqueS();                                     //Tiene sus propios metodos unicos.
        void Stun();
        string to_string();                                 //Tiene el metodo heredado para implementar
};                                                          //polimorfismo.

int Asesino::getRadioTerror(){                              //Geter del atributo RadioTerror.
    return RadioTerror;
}

void Asesino::setRadioTerror(){                             //Seter del atributo RadioTerror. 
    int RT;
    cin>>RT;
    RadioTerror = RT;
}

string Asesino::getNombreHabilidad(){                       //Geter del atributo NombreHabilidad.
    return NombreHabilidad;
}

void Asesino::setNombreHabilidad(){                         //Seter del atributo NombreHabilidad. 
    string NH;
    cin>>NH;
    NombreHabilidad = NH;
}

void Asesino::caminar(){                                    //Se sobre escribe el metodo caminar que imprime la
    cout<<"Avanzas a una velocidad de 4.6 m/s"<<endl;       //velocidad del personaje.
}

void Asesino::saltarVentana(){                              //Se sobre escribe el metodo saltarVentana que
    cout<<"Saltas la ventana en 1.7 segundos"<<endl;        //imprime el tiempo que tarda en saltar la ventana.
}

void Asesino::interactuarPale(){                            //Se sobre escribe el metodo interactuarPale que
    cout<<"Rompes el pale en 2.6 segundos"<<endl;           //imprime el tiempo que tarda en romper el pale.
}

void Asesino::AtaqueS(){                                    //Se declara el metodo AtaqueS el cual imprime que el 
    cout<<"El asesino ha atacado..."<<endl;                 //asesino ha atacado, pero no ha logrado golpear a
    cout<<"No hay nadie a quien hacer daño"<<endl;          //nadie.
    
}

void Asesino::Stun(){                                       //Se declara el metodo Stun el cual imprime el tiempo
    cout<<"Te han aturdido durante 2 segundos"<<endl;       //en el que el asesino se queda aturdido.
}

string Asesino::to_string(){                                //Se declara el metodo to_string el cual crea una
    stringstream datos;                                     //cadena de string para mostrar todos los datos
    datos << "El asesino es " << getNombre() <<             //del asesino. Este metodo sera llamado para
    ", con una altura de " << getAltura() <<                //mostrar polimorfismo.
    ", un volumen de " << getVolumen() << 
    ", un radio de terror de " << RadioTerror <<
    " y con la habilidad " << NombreHabilidad << "\n";
    return datos.str();
}

#endif