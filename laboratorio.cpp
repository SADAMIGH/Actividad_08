#include "laboratorio.h"
#include <fstream>

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

    for (size_t i=0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout << p;

        // cout << "Nombre: " <<p.getNombre_E()<<endl;
        // cout << "Sistema operativo: " <<p.getSistema_O()<<endl;
        // cout << "Procesador: " <<p.getProcesador_N()<<endl;
        // cout << "Ram: " <<p.getRam()<<"GB"<<endl;
        // cout << endl;
    }
    
    
}
void Laboratorio::respaldar(){
    ofstream archivo ("Computadoras.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < cont; i++) {
        Computadora &c = arreglo[i];
        archivo << c.getNombre_E() << endl;
        archivo << c.getSistema_O() << endl;
        archivo << c.getProcesador_N() << endl;
        archivo << c.getRam() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        string temp;
        int ram;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setNombre_E(temp);

            getline(archivo, temp);
            c.setSistema_O(temp);

            getline(archivo, temp);
            c.setProcesador_N(temp);

            getline(archivo, temp);
            ram = stoi(temp);
            c.setRam(ram);

            agregarComputadora(c);

        }
        
    }
    archivo.close();
}