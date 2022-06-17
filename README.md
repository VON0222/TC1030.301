# TC1030.301
Repositorio para la materia de Programación orientada a objetos (TC1030.301) en el cual se encuentra el proyecto hecho en C++ que busca solucionar un problema.

## Problema:

El problema que se busca solucionar principalmente es el poder visualizar la diferencia de tiempos que toma realizar cada una de las acciones dependiendo del bando en el que se esté jugando en el videojuego Dead By Daylight, además de la visualización de ciertos datos que pueden ser de utilidad (¿que tan ruidoso es un personaje?, su altura, etc.). 
De esta manera este programa puede ser de utilidad para jugadores que buscan generar estrategias para poder huir/atrapar más eficazmente.

## Funcionalidad:

El proyecto que he elegido realizar es un generador de personajes para el videojuego Dead By Daylight. 
Este generador dará la capacidad de generar tanto supervivientes como asesinos de este juego multijugador asimétrico, los cuales podrán realizar algunas acciones tales como saltar ventanas e interactuar con pales, sin embargo dependiendo si se trata de un asesino o superviviente la interacción tendrá diferentes valores de tiempo o resultados. 
También se buscará crear mapas tanto interiores como exteriores los cuales tendrán sus propias características.
Una vez creados se podrán generar, colocar los personajes creados en estos mapas e iniciar el colapso del fin del juego para autodestruir el mapa.

## ¿Qué hace el programa?

Una vez iniciado el programa pedirá al usuario que elija alguna de las cuatro (4) opciones disponibles. Dependiendo de la elección el programa hará diferentes acciones. La elección 1 generara un objecto asesino por default, imprimirá el volumen de este asesino y generará un asesino llamado "Trapper" el cual realizará las acciones (métodos) saltarVentana() y AtaqueS() los cuales imprimen el tiempo que tarda el asesino en realizar estas acciones.

Le elección 2 generara un objeto superviviente por default, imprimirá el volumen de este superviviente y generará cuatro supervivientes llamados "Jake", "Meg", "Dwight" y "Claudette" el cual realizará las acciones (métodos) saltarVentana(), caminar(), Herir() e interactuarPale() los cuales imprimen el tiempo que tarda cada superviviente en realizar estas acciones y las consecuencias de algunas de estas acciones.

La elección 3 genera un mapa interior llamado "RPD" y llama los métodos creachara(), GenerarMapa(), ColocarPersonajes() y Collapsar() los que crean objetos de tipo superviviente y asesino para el mapa, imprime que genera el mapa, imprimen los objetos asesino y supervivientes al ser colocados en el mapa e imprimen el tiempo en el que el mapa se autodestruirá.

Y por último la elección 4 genera un mapa exterior llamado "GardenOfJoy" y llama los métodos creachara(), GenerarMapa(), ColocarPersonajes() y Collapsar() los que crean objetos de tipo superviviente y asesino para el mapa, imprime que genera el mapa, imprimen los objetos asesino y supervivientes al ser colocados en el mapa e imprimen el tiempo en el que el mapa se autodestruirá.

## Posibles errores:

Realmente no veo alguna manera en la cual el usuario podría generar un error, ya que el único sistema que el usuario podría ingresar un input inesperado es en el if del main en el que se pide su elección sobre que quiere que haga el programa, pero en caso de que el usuario de como input una opción no válida el programa imprimirá que esa opción no es válida y finalizará su ejecución.

## Correcciones:

No hay correcciones.

Este proyecto fue realizado por José Diego Llaca Castro
