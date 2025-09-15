#pragma once

class Fecha{
    int _dia, _mes, _anio;

public:
    Fecha(int dia, int mes, int anio);

    int getDia();
    int getMes();
    int getAnio();

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    std::string toString(); //11/9/2025

};
