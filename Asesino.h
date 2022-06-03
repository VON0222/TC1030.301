#ifndef ASESINO_H
#define ASESINO_H

#include "Personaje.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Asesino : public Personaje{
    private:
        int RadioTerror;
        string NombreHabilidad;
    public:
        Asesino():Personaje(){
            RadioTerror = 32;
            NombreHabilidad = "default";
        }

        Asesino(string nom, float h, int vol, int RT, string NH):Personaje(nom, h, vol){
            RadioTerror = RT;
            NombreHabilidad = NH;
        }

        int getRadioTerror();
        void setRadioTerror();
        string getNombreHabilidad();
        void setNombreHabilidad();
        void caminar();
        void saltarVentana();
        void interactuarPale();
        void AtaqueS();
        void Stun();
        string to_string();
};

int Asesino::getRadioTerror(){
    return RadioTerror;
}

void Asesino::setRadioTerror(){
    int RT;
    cin>>RT;
    RadioTerror = RT;
}

string Asesino::getNombreHabilidad(){
    return NombreHabilidad;
}

void Asesino::setNombreHabilidad(){
    string NH;
    cin>>NH;
    NombreHabilidad = NH;
}

void Asesino::caminar(){
    cout<<"Avanzas a una velocidad de 4.6 m/s"<<endl;
}

void Asesino::saltarVentana(){
    cout<<"Saltas la ventana en 1.7 segundos"<<endl;
}

void Asesino::interactuarPale(){
    cout<<"Rompes el pale en 2.6 segundos"<<endl;
}

void Asesino::AtaqueS(){
    cout<<"El asesino ha atacado..."<<endl;
    cout<<"No hay nadie a quien hacer daño"<<endl;
    
}

void Asesino::Stun(){
    cout<<"Te han aturdido durante 2 segundos"<<endl;
}

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