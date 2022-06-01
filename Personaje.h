#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>

using namespace std;

class Personaje{
    private:
        string Nombre;
        float Altura;
        int Volumen;
    public:
        Personaje();
        Personaje(string nom, float h, int vol);
        string getNombre();
        void setNombre();
        float getAltura();
        void setAltura();
        int getVolumen();
        void setVolumen();
        void caminar();
        void saltarVentana();
        void interactuarPale();
};

Personaje::Personaje(){
    Nombre = "default";
    Altura = 1.80;
    Volumen = 100;
}

Personaje::Personaje(string nom, float h, int vol){
    Nombre = nom;
    Altura = h;
    Volumen = vol;
}

string Personaje::getNombre(){
    return Nombre;
}

void Personaje::setNombre(){
    string nom;
    cin>>nom;
    Nombre = nom;
}

float Personaje::getAltura(){
    return Altura;
}

void Personaje::setAltura(){
    float h;
    cin>>h;
    Altura = h;
}

int Personaje::getVolumen(){
    return Volumen;
}

void Personaje::setVolumen(){
    int vol;
    cin>>vol;
    Volumen = vol;
}

#endif