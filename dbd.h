#ifndef DBD_H
#define DBD_H

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
        void caminar();
        void saltarVentana();
        void interactuarPale();
        void setNombreHabilidad();
        void AtaqueS();
        void Stun();
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

class Mapa{
    private:
        int Tiles;
    public:
        Mapa();
        Mapa(int numT);
        int getTiles();
        void setTiles();
        void GenerarMapa();
        void Collapsar();
        void ColocarPersonajes();
};

Mapa::Mapa(){
    Tiles = 13;
}

Mapa::Mapa(int numT){
    Tiles = numT;
}

int Mapa::getTiles(){
    return Tiles;
}

void Mapa::setTiles(){
    int numT;
    cin>>numT;
    Tiles = numT;
}

class MapaExt : public Mapa{
    private:
        string MainTile;
    public:
        MapaExt():Mapa(){
            MainTile = "Unknown";
        }

        MapaExt(int numT, string MainT):Mapa(numT){
            MainTile = MainT;
        }

        string getMainTile();
        void setMainTile();
        void GenerarMapa();
        void Collapsar();
        void ColocarPersonajes();
};

string MapaExt::getMainTile(){
    return MainTile;
}

void MapaExt::setMainTile(){
    string MainT;
    cin>>MainT;
    MainTile = MainT;
}

void MapaExt::GenerarMapa(){
    cout<<"El mapa ha sido generado!"<<endl;
}

void MapaExt::Collapsar(){
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;
}

void MapaExt::ColocarPersonajes(){
    cout<<"Los personajes estan en el mapa"<<endl;
}

class MapaInt : public Mapa{
    private:
        int Pisos;
    public:
        MapaInt():Mapa(){
            Pisos = 2;
        }

        MapaInt(int numT, int numP):Mapa(numT){
            Pisos = numP;
        }

        int getPisos();
        void setPisos();
        void GenerarMapa();
        void Collapsar();
        void ColocarPersonajes();
};

int MapaInt::getPisos(){
    return Pisos;
}

void MapaInt::setPisos(){
    int numP;
    cin>>numP;
    Pisos = numP;
}

void MapaInt::GenerarMapa(){
    cout<<"El mapa ha sido generado!"<<endl;
}

void MapaInt::Collapsar(){
    cout<<"El mapa se autodestruira en 2 minutos"<<endl;
}

void MapaInt::ColocarPersonajes(){
    cout<<"Los personajes estan en el mapa"<<endl;
}

#endif