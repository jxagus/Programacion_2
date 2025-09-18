#pragma once
#include <string>
class Fecha{

public:
    Fecha();
    Fecha(int dia, int mes, int anio);

    int getDia();
    int getMes();
    int getAnio();

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    std::string toString(); //11/9/2025 dd mm yyyy
protected:

private:
    int _dia:
    int _mes;
    int _anio;
};
