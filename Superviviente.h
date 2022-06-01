#ifndef SUPERVIVIENTE_H
#define SUPERVIVIENTE_H

#include "Personaje.h"
#include <iostream>
#include <string>

using namespace std;

class Superviviente : public Personaje{
    private:
        string EstadoSalud;
    public:
        Superviviente():Personaje(){
            EstadoSalud = "sano";
        }

        Superviviente(string nom, float h, int vol, string salud):Personaje(nom, h, vol){
            EstadoSalud = salud;
        }

        string getEstadoSalud();
        void setEstadoSalud();
        void caminar();
        void saltarVentana();
        void interactuarPale();
        void Herir();
        void Curar();
        void Muerte();
};

string Superviviente::getEstadoSalud(){
    return EstadoSalud;
}

void Superviviente::setEstadoSalud(){
    string salud;
    cin>>salud;
    EstadoSalud = salud;
}

void Superviviente::caminar(){
    cout<<"Avanzas a una velocidad de 4 m/s"<<endl;
}

void Superviviente::saltarVentana(){
    cout<<"Saltas la ventana en 0.5 segundos"<<endl;
}

void Superviviente::interactuarPale(){
    cout<<"Saltas el pale en 0.5 segundos"<<endl;
}

void Superviviente::Herir(){
    cout<<"Pierdes un estado de salud!"<<endl;
    cout<<"Pasas de "<<EstadoSalud<<" a herido"<<endl;
}

void Superviviente::Curar(){
    cout<<"Ganas un estado de salud!"<<endl;
    cout<<"Pasas de herido a "<<EstadoSalud<<endl;
}

void Superviviente::Muerte(){
    cout<<"Perdiste!!"<<endl;
    cout<<"El asesino te ha matado!"<<endl;
}

#endif