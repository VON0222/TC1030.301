/*Este es el header de la clase hija Superviviente, esta clase hereda todos los atributos y metodos
 de la clase Personaje, sobre escribe algunos metodos e implementa el metodo virtual heredado de la
 clase Personaje.*/
#ifndef SUPERVIVIENTE_H
#define SUPERVIVIENTE_H

#include "Personaje.h"
#include <iostream>
#include <string>

using namespace std;

class Superviviente : public Personaje{                                 //La clase recibe herencia de la clase 
    private:                                                            //Personaje.
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

string Superviviente::getEstadoSalud(){                     //Geter del atributo EstadoSalud.
    return EstadoSalud;
}

void Superviviente::setEstadoSalud(){                       //Seter del atributo EstadoSalud 
    string salud;                                           
    cin>>salud;
    EstadoSalud = salud;
}

void Superviviente::caminar(){                              //Se sobre escribe el metodo caminar que imprime la 
    cout<<"Avanzas a una velocidad de 4 m/s"<<endl;         //velocidad del personaje.
}

void Superviviente::saltarVentana(){                        //Se sobre escribe el metodo saltarVentana que  
    cout<<"Saltas la ventana en 0.5 segundos"<<endl;        //imprime el tiempo que tarda en saltar la ventana.
}

void Superviviente::interactuarPale(){                      //Se sobre escribe el metodo interactuarPale que 
    cout<<"Saltas el pale en 0.5 segundos"<<endl;           //imprime el tiempo que tarda en saltar el pale.
}

void Superviviente::Herir(){
    cout<<"Pierdes un estado de salud!"<<endl;              //Se declara el metodo Herir que imprime que el 
    cout<<"Pasas de "<<EstadoSalud<<" a herido"<<endl;      //superviviente pierde un estado de salud y 
}                                                           //muestra a que estado pasa.

void Superviviente::Curar(){                                //Se declara el metodo Curar que imprime que el 
    cout<<"Ganas un estado de salud!"<<endl;                //gana un estado de salud y muestra de que estado
    cout<<"Pasas de herido a "<<EstadoSalud<<endl;          //a que estado pasa.
}

void Superviviente::Muerte(){                               //Se declara el metodo Muerte que imprime cuando 
    cout<<"Perdiste!!"<<endl;                               //el superviviente pierde y es asesinado.
    cout<<"El asesino te ha matado!"<<endl;
}

string Superviviente::to_string(){                          //Se declara el metodo to_string el cual crea una
    stringstream datos;                                     //cadena de string para mostrar todos los datos
    datos << "El superviviente es " << getNombre() <<       //del superviviente. Este metodo sera llamado para 
    ", con una altura de " << getAltura() <<                //mostrar polimorfismo.
    ", un volumen de " << getVolumen() << 
    " y con un estado de salud " << EstadoSalud <<"\n";
    return datos.str();
}

#endif