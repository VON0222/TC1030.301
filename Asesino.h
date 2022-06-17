/*
 * Proyecto DBD main
 * José Diego Llaca Castro
 * A01704793
 * 16/06/2022
 * Versión: 6
 * Este es el header de la clase hija Asesino, esta clase hereda todos 
 * los atributos y metodos de la clase Personaje, sobre escribe algunos 
 * metodos e implementa el metodo virtual heredado de la clase Personaje.
 */

#ifndef ASESINO_H
#define ASESINO_H

#include "Personaje.h"          //biblioteca con mis objetos a usar.
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Asesino : public Personaje{                           //La clase hereda de la clase Personaje.
    private:
    //Declaro las variables privadas de instancia.
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

/**
 * getRadioTerror devuelve el valor de RadioTerror.
 * 
 * Al llamar este método devuelve el valor de RadioTerror el cual es int.
 * 
 * @param
 * @return int 
 */

int Asesino::getRadioTerror(){                              
    return RadioTerror;
}

/**
 * setRadioTerror da un valor a RadioTerror.
 * 
 * Al llamar este método pide al usuario un int para guardar en RadioTerror.
 * 
 * @param 
 * @return
 */

void Asesino::setRadioTerror(){                              
    int RT;
    cin>>RT;
    RadioTerror = RT;
}

/**
 * getNombreHabilidad devuelve el valor de NombreHabilidad.
 * 
 * Al llamar este método devuelve el valor de NombreHabilidad el cual es
 * string.
 * 
 * @param
 * @return string 
 */

string Asesino::getNombreHabilidad(){                       
    return NombreHabilidad;
}

/**
 * setNombreHabilidad da un valor a NombreHbailidad.
 * 
 * Al llamar este método pide al usuario un string para guardar en 
 * NombreHabilidad.
 * 
 * @param 
 * @return
 */

void Asesino::setNombreHabilidad(){                         
    string NH;
    cin>>NH;
    NombreHabilidad = NH;
}

/**
 * caminar imprime la velocidad del asesino.
 * 
 * Al llamar este método imprime la velocidad del asesino.
 * 
 * @param 
 * @return
 */

void Asesino::caminar(){                                    
    cout<<"Avanzas a una velocidad de 4.6 m/s"<<endl;       
}

/**
 * saltarVentana imprime el tiempo que toma saltar una ventana.
 * 
 * Al llamar este método se imprime el tiempo que le toma al asesino 
 * saltar una ventana.
 * 
 * @param 
 * @return
 */

void Asesino::saltarVentana(){                              
    cout<<"Saltas la ventana en 1.7 segundos"<<endl;        
}

/**
 * interactuarPale imprime el tiempo que toma interactuar con un pale.
 * 
 * Al llamar este método se imprime el tiempo que le toma al asesino 
 * romper un pale.
 * 
 * @param 
 * @return
 */

void Asesino::interactuarPale(){                            
    cout<<"Rompes el pale en 2.6 segundos"<<endl;           
}

/**
 * AtaqueS imprime al asesino atacando, pero no da a nadie.
 * 
 * Al llamar este método imprime que el asesino ha atacado, pero no ha 
 * logrado golpear a nadie.
 * 
 * @param 
 * @return
 */

void Asesino::AtaqueS(){                                     
    cout<<"El asesino ha atacado..."<<endl;                 
    cout<<"No hay nadie a quien hacer danio"<<endl;          
    
}

/**
 * Stun imprime al tiempo de aturdimiento.
 * 
 * Al llamar este método imprime el tiempo durante el cual el asesino 
 * queda aturdido.
 * 
 * @param 
 * @return
 */

void Asesino::Stun(){                                       
    cout<<"Te han aturdido durante 2 segundos"<<endl;       
}

/**
 * to_string crea una cadena de string para mostrar los atributos de 
 * asesino.
 * 
 * Al llamar este método crea una cadena de string para mostrar todos 
 * los datos del objeto asesino. Este método es llamado para mostrar 
 * polimorfismo.
 * 
 * @param
 * @return string con los valores y tecto concatenado.
 */

string Asesino::to_string(){                                
    stringstream datos;                                     
    datos << "El asesino es " << getNombre() <<             
    ", con una altura de " << getAltura() <<                
    ", un volumen de " << getVolumen() << 
    ", un radio de terror de " << RadioTerror <<
    " y con la habilidad " << NombreHabilidad << "\n";
    return datos.str();
}

#endif