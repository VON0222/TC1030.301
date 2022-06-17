/*
 * Proyecto DBD main
 * José Diego Llaca Castro
 * A01704793
 * 16/06/2022
 * Versión: 7
 * Este es un proyecto demo para la clase TC1030 Programación Orientado a
 * Objetos. Es un programa que genera supervivientes y asesinos para el 
 * videojuego Dead By Daylight con sus atributos respectivos, ademas 
 * genera mapas interiores y exteriores y coloca los personajes generados 
 * dentro de ellos.
 */

#include "Asesino.h"            //Biblioteca con objetos de mi proyecto.
#include "Superviviente.h"      //Biblioteca con objetos de mi proyecto.
#include "MapaExt.h"            //Biblioteca con objetos de mi proyecto.
#include "MapaInt.h"            //Biblioteca con objetos de mi proyecto.
#include <iostream>             //Para imprimir.

using namespace std;

int main(){                                                 //Este es el main para correr el programa.
    cout<<"Hola usuario, elige que deseas hacer:"<<endl;
    cout<<"(1) Checar acciones de asesinos"<<endl;
    cout<<"(2) Checar acciones de supervivientes"<<endl;
    cout<<"(3) Generar un mapa interior"<<endl;
    cout<<"(4) Generar un mapa exterior"<<endl;
    int choice;
    cin>>choice;
    
    if (choice==1){
    Asesino default1;                                       //Se crea un objeto de clase Asesino con el constructor por default.
    Asesino Trapper("Trapper", 1.80, 100, 32, "Trampas");   //Se crea un objeto "Trapper" de clase Asesino con el constructor sobrecargado.
    cout<<default1.getVolumen()<<endl;                      //Se imprime el atributo Volumen del objeto Asesino creado con el constructor por default.
    Trapper.saltarVentana();                                //Se llama al metodo saltarVentana del objeto "Trapper".
    Trapper.AtaqueS();                                      //Se llama al metodo AtaqueS del objeto "Trapper".
    }
    else if (choice==2){
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
    }
    else if (choice==3){
    MapaInt RPD(20,3);                                      //Se crea un objeto "RPD" de clase MapaInt con el constructor sobrecargado.
    RPD.creachara();                                        //Se llama al metodo creachara del objeto "RPD".
    RPD.GenerarMapa();                                      //Se llama al metodo GenerarMapa del objeto "RPD".
    RPD.ColocarPersonajes();                                //Se llama al metodo ColocarPersonajes del objeto "RPD".
    RPD.Collapsar();                                        //Se llama al metodo Collapsar del objeto "RPD".
    }
    else if (choice==4){
    MapaExt GardenOfJoy(24,"Casa Retorcida");               //Se crea un objeto "GardenOfJoy" de clase MapaExt con el constructor sobrecargado.
    GardenOfJoy.creachara();                                //Se llama al metodo creachara del objeto "GardenOfJoy".
    GardenOfJoy.GenerarMapa();                              //Se llama al metodo GenerarMapa del objeto "GardenOfJoy".
    GardenOfJoy.ColocarPersonajes();                        //Se llama al metodo ColocarPersonajes del objeto "GardenOfJoy".
    GardenOfJoy.Collapsar();                                //Se llama al metodo Collapsar del objeto "GardenOfJoy".
    }
    else {
    cout<<"Opcion no encontrada"<<endl;
    }
    return 0;                                               //Se finaliza el main.
}