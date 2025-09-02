#include <iostream>
#include "Incrementador.h"

using namespace std;

int main()
{
    Incrementador in;
    in.incrementar(0,50);
    cout<<"valor del incremento: "<<in.getValor()<<endl;;
    cout<<"cantidad: "<<in.getCantidadIncremento()<<endl;;
    return 0;
}
