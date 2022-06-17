/*
 * Proyecto DBD main
 * José Diego Llaca Castro
 * A01704793
 * 16/06/2022
 * Versión: 4
 * Este es el header de la clase hija Superviviente, esta clase hereda 
 * todos los atributos y metodos de la clase Personaje, sobre escribe 
 * algunos metodos e implementa el metodo virtual heredado de la
 * clase Personaje.
 */

#ifndef SUPERVIVIENTE_H
#define SUPERVIVIENTE_H

#include "Personaje.h"          //biblioteca con mis objetos a usar.
#include <iostream>
#include <string>

using namespace std;

class Superviviente : public Personaje{                                 //La clase hereda de la clase 
    private:                                                            //Personaje.
    //Declaro las variables privadas de instancia.                                                            
        string EstadoSalud;                                             //Solo tiene un atributo ademas de los 
    public:                                                             //heredados de Personaje.
        Superviviente():Personaje(){                                    //Tiene su constructor por default.
            EstadoSalud = "sano";
        }

        Superviviente(string nom, float h, int vol, string salud):Personaje(nom, h, vol){       //Y su 
            EstadoSalud = salud;                                                                //constructor 
        }                                                                                       //sobrecargado.

        string getEstadoSalud();                            //Tiene su geter y seter de su unico atributo.
        void setEstadoSalud();                              
        void caminar();                                     //Tiene los metodos heredados los cuales esta vez si
        void saltarVentana();                               //son declarados.
        void interactuarPale();                              
        void Herir();                                       //Tiene sus propios metodos unicos.
        void Curar();
        void Muerte();                                      
        string to_string();                                 //Tiene el metodo heredado para implementar 
};                                                          //polimorfismo.

/**
 * getEstadoSalud devuelve el valor de EstadoSalud.
 * 
 * Al llamar este método devuelve el valor de EstadoSalud el cual es 
 * string.
 * 
 * @param
 * @return string 
 */

string Superviviente::getEstadoSalud(){                     
    return EstadoSalud;
}

/**
 * setEstadoSalud da un valor a EstadoSalud.
 * 
 * Al llamar este método pide al usuario un string para guardar en 
 * EstadoSalud.
 * 
 * @param 
 * @return
 */

void Superviviente::setEstadoSalud(){                       
    string salud;                                           
    cin>>salud;
    EstadoSalud = salud;
}

/**
 * caminar imprime la velocidad del asesino.
 * 
 * Al llamar este método imprime la velocidad del superviviente.
 * 
 * @param 
 * @return
 */

void Superviviente::caminar(){                               
    cout<<"Avanzas a una velocidad de 4 m/s"<<endl;         
}

/**
 * saltarVentana imprime el tiempo que toma saltar una ventana.
 * 
 * Al llamar este método se imprime el tiempo que le toma al superviviente
 * saltar una ventana.
 * 
 * @param  
 * @return
 */

void Superviviente::saltarVentana(){                          
    cout<<"Saltas la ventana en 0.5 segundos"<<endl;        
}

/**
 * interactuarPale imprime el tiempo que toma interactuar con un pale.
 * 
 * Al llamar este método se imprime el tiempo que le toma al superviviente
 * saltar un pale.
 * 
 * @param 
 * @return
 */

void Superviviente::interactuarPale(){                       
    cout<<"Saltas el pale en 0.5 segundos"<<endl;           
}

/**
 * Herir imprime al superviviente perdiendo un estado de salud.
 * 
 * Al llamar este método imprime que el superviviente pierde un estado
 * de salud y muestra a que estado pasa.
 * 
 * @param
 * @return
 */

void Superviviente::Herir(){
    cout<<"Pierdes un estado de salud!"<<endl;              
    cout<<"Pasas de "<<EstadoSalud<<" a herido"<<endl;       
}          

/**
 * Curar imprime al superviviente ganando un estado de salud.
 * 
 * Al llamar este método imprime que el superviviente gana un estado 
 * de salud y muestra a que estado pasa.
 * 
 * @param 
 * @return
 */

void Superviviente::Curar(){                                 
    cout<<"Ganas un estado de salud!"<<endl;                
    cout<<"Pasas de herido a "<<EstadoSalud<<endl;          
}

/**
 * Muerte imprime al superviviente muriendo y perdiendo el juego.
 * 
 * Al llamar este método imprime cuando el superviviente pierde 
 * y es asesinado.
 * 
 * @param 
 * @return
 */

void Superviviente::Muerte(){                                
    cout<<"Perdiste!!"<<endl;                               
    cout<<"El asesino te ha matado!"<<endl;
}

/**
 * to_string crea una cadena de string para mostrar los atributos de 
 * superviviente.
 * 
 * Al llamar este método crea una cadena de string para mostrar todos 
 * los datos del objeto superviviente. Este método es llamado para mostrar 
 * polimorfismo.
 * 
 * @param
 * @return string con los valores y tecto concatenado.
 */

string Superviviente::to_string(){                          
    stringstream datos;                                     
    datos << "El superviviente es " << getNombre() <<       
    ", con una altura de " << getAltura() <<                
    ", un volumen de " << getVolumen() << 
    " y con un estado de salud " << EstadoSalud <<"\n";
    return datos.str();
}

#endif