#include <iostream>
#include "laboratorio.h"
using namespace std;

int main(){

    Computadora C1, C2, C3, C4;

    C1.setNombre_E("Computadora 01");
    C1.setSistema_O("Linux");
    C1.setProcesador_N("Core i5-10400F");
    C1.setRam(8);

    C2.setNombre_E("Computadora 02");
    C2.setSistema_O("MacOs");
    C2.setProcesador_N("Core i7-2860QM");
    C2.setRam(6);

    C3.setNombre_E("Computadora 03");
    C3.setSistema_O("Windows");
    C3.setProcesador_N("Intel Xeon E-22xx");
    C3.setRam(12);

    C4.setNombre_E("Computadora 04");
    C4.setSistema_O("ChromeOs");
    C4.setProcesador_N("Core i5-7100F");
    C4.setRam(8);

    Laboratorio lab;
    lab.agregarFinal(C1);
    lab.agregarFinal(C2);
    lab.agregarFinal(C3);
    lab.agregarFinal(C4);

    lab.mostrar();

    system("PAUSE");
    return 0;
}