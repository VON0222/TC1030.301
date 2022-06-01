#include "dbd.h"
#include <iostream>

using namespace std;

int main(){
    Asesino default1;
    Asesino Trapper("Trapper", 1.80, 100, 32, "Trampas");
    cout<<default1.getVolumen()<<endl;
    Trapper.saltarVentana();

    Superviviente default2;
    Superviviente Jake("Jake", 1.60, 90, "sano");
    cout<<default2.getVolumen()<<endl;
    Jake.saltarVentana();
}