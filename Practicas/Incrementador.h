#pragma once

///CLASES
class Incrementador{
    private:
        int _valor;
        int _valorIncremento;
        int _cantidadIcrementos;
    public:
        ///CONSTRUCTOR
        Incrementador(int valorInicial,int valorIncremento);

        void Incrementar();
        int getValor();
        int getCantidadIncremento();
};
