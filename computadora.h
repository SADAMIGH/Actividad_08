#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora{
    
        string nombre_E;
        string sistema_O;
        string procesador_N;
        int ram;
    public:
        Computadora();
        Computadora(const string &nombre_E,
                  const string &sistema_O,
                  const string &procesador_N,
                  int ram);

        void setNombre_E(const string &v);
        string getNombre_E();
        void setSistema_O(const string &v);
        string getSistema_O();
        void setProcesador_N(const string &v);
        string getProcesador_N();
        void setRam(int v);
        int getRam();

    };

#endif

