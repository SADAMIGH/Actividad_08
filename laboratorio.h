#ifndef LABORATORIO_H
#define LABORATORIO_H

#include"computadora.h"

class Laboratorio{
    Computadora arreglo[5];
    size_t cont;
public: 
    Laboratorio();
    void agregarComputadora(const Computadora &p);
    void mostrar();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c){
        l.agregarComputadora(c);
        return l;
    }
};


#endif