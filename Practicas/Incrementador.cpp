#include "Incrementador.h"
//constructor que llamamos al principio de todo
Incrementador::Incrementador(int valorInicial, int valorIncremento){
    _valor = valorInicial;
    _valorIncremento = valorIncremento;
    _cantidadIcrementos = 0;
}
void Incrementador::incrementar(){
    _valor += _valorIncremento;
    _cantidadIncrementados++;
}
int Incrementador::getValor(){
return _valor
}
int Incrementador::getCantidadIncremento(){
return _cantidadIcrementos}
