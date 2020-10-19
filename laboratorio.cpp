#include "laboratorio.h"

Laboratorio::Laboratorio(){

    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
{
    if (cont <5){
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout <<"Arreglo lleno" << endl;
    }
}
void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(20) << "Nombre del equipo";
    cout << setw(20) << "Sistema operativo";
    cout << setw(20) << "Procesador";
    cout << setw(5) << "Ram";
    cout << endl;
/*
    for (size_t i=0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout << p;

        cout << "Nombre: " <<p.getNombre_E()<<endl;
        cout << "Sistema operativo: " <<p.getSistema_O()<<endl;
        cout << "Procesador: " <<p.getProcesador_N()<<endl;
        cout << "Ram: " <<p.getRam()<<"GB"<<endl;
        cout << endl;
    }
    */
    
}