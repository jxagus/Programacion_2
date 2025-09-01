#include <iostream>
#include "funciones.h"

using namespace std;

void linea(int cantidad=30, char simbolo='-'){
    for(int i =0; i<cantidad; i ++){
        cout <<simbolo;
    }
    cout<<endl;
}
///paramos por omision
int pedirNumero(string mensaje = "ingrese numero: "){
    int n;
    cout<< mensaje;
    cin>> n;

    return n;
}
