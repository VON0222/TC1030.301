#include "Asesino.h"
#include "Superviviente.h"
#include "MapaExt.h"
#include "MapaInt.h"
#include <iostream>

using namespace std;

int main(){                                                 //Este es el main para correr el programa.
    Asesino default1;                                       //Se crea un objeto de clase Asesino con el constructor por default.
    Asesino Trapper("Trapper", 1.80, 100, 32, "Trampas");   //Se crea un objeto "Trapper" de clase Asesino con el constructor sobrecargado.
    cout<<default1.getVolumen()<<endl;                      //Se imprime el atributo Volumen del objeto Asesino creado con el constructor por default.
    Trapper.saltarVentana();                                //Se llama al metodo saltarVentana del objeto "Trapper".
    Trapper.AtaqueS();                                      //Se llama al metodo AtaqueS del objeto "Trapper".

    Superviviente default2;                                 //Se crea un objeto de clase Superviviente con el constructor por default.
    Superviviente Jake("Jake", 1.60, 90, "sano");           //Se crean los objetos "Jake", "Meg", "Dwight" y 
    Superviviente Meg("Meg", 1.55, 105, "sano");            //"Claudette" de clase Superviviente con el 
    Superviviente Dwight("Dwight", 1.60, 95, "sano");       //constructor sobrecargado.
    Superviviente Claudette("Claudette", 1.55, 105, "sano");
    cout<<default2.getVolumen()<<endl;                      //Se imprime el atributo Volumen del objeto Superviviente creado con el constructor por default.
    Jake.saltarVentana();                                   //Se llama al metodo saltarVentana del objeto "Jake".
    Meg.caminar();                                          //Se llama al metodo caminar del objeto "Meg".
    Dwight.Herir();                                         //Se llama al metodo Herir del objeto "Dwight".
    Claudette.interactuarPale();                            //Se llama al metodo interactuarPale del objeto "Claudette".

    MapaInt RPD(20,3);                                      //Se crea un objeto "RPD" de clase MapaInt con el constructor sobrecargado.
    RPD.creachara();                                        //Se llama al metodo creachara del objeto "RPD".
    RPD.GenerarMapa();                                      //Se llama al metodo GenerarMapa del objeto "RPD".
    RPD.ColocarPersonajes();                                //Se llama al metodo ColocarPersonajes del objeto "RPD".
    RPD.Collapsar();                                        //Se llama al metodo Collapsar del objeto "RPD".

    MapaExt GardenOfJoy(24,"Casa Retorcida");               //Se crea un objeto "GardenOfJoy" de clase MapaExt con el constructor sobrecargado.
    GardenOfJoy.creachara();                                //Se llama al metodo creachara del objeto "GardenOfJoy".
    GardenOfJoy.GenerarMapa();                              //Se llama al metodo GenerarMapa del objeto "GardenOfJoy".
    GardenOfJoy.ColocarPersonajes();                        //Se llama al metodo ColocarPersonajes del objeto "GardenOfJoy".
    GardenOfJoy.Collapsar();                                //Se llama al metodo Collapsar del objeto "GardenOfJoy".

    return 0;                                               //Se finaliza el main.
}