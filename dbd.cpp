#include "Asesino.h"
#include "Superviviente.h"
#include "MapaExt.h"
#include "MapaInt.h"
#include <iostream>

using namespace std;

int main(){
    Asesino default1;
    Asesino Trapper("Trapper", 1.80, 100, 32, "Trampas");
    cout<<default1.getVolumen()<<endl;
    Trapper.saltarVentana();
    Trapper.AtaqueS();

    Superviviente default2;
    Superviviente Jake("Jake", 1.60, 90, "sano");
    Superviviente Meg("Meg", 1.55, 105, "sano");
    Superviviente Dwight("Dwight", 1.60, 95, "sano");
    Superviviente Claudette("Claudette", 1.55, 105, "sano");
    cout<<default2.getVolumen()<<endl;
    Jake.saltarVentana();
    Meg.caminar();
    Dwight.Herir();
    Claudette.interactuarPale();

    MapaInt RPD(20,3);
    RPD.creachara();
    RPD.GenerarMapa();
    RPD.ColocarPersonajes();
    RPD.Collapsar();

    MapaExt GardenOfJoy(24,"Casa Retorcida");
    GardenOfJoy.creachara();
    GardenOfJoy.GenerarMapa();
    GardenOfJoy.ColocarPersonajes();
    GardenOfJoy.Collapsar();
}